#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/joint_state.hpp"
#include "interbotix_xs_msgs/msg/joint_group_command.hpp"
#include "interbotix_xs_msgs/msg/joint_single_command.hpp"
#include "interbotix_xs_msgs/srv/torque_enable.hpp"
#include "interbotix_xs_msgs/srv/operating_modes.hpp"
#include "interbotix_xs_msgs/srv/robot_info.hpp"
#include "interbotix_xs_msgs/srv/motor_gains.hpp"
#include "interbotix_xs_msgs/srv/register_values.hpp"
#include "interbotix_xs_msgs/srv/reboot.hpp"
#include <chrono>

using namespace std::chrono_literals;

class FakeSDK : public rclcpp::Node
{
public:
    FakeSDK() : Node("xs_sdk")
    {
        // Subscribers for joint commands
        group_sub = create_subscription<interbotix_xs_msgs::msg::JointGroupCommand>(
            "commands/joint_group", 10,
            std::bind(&FakeSDK::group_cb, this, std::placeholders::_1));
        
        single_sub = create_subscription<interbotix_xs_msgs::msg::JointSingleCommand>(
            "commands/joint_single", 10,
            std::bind(&FakeSDK::single_cb, this, std::placeholders::_1));

        // Publisher for joint states
        joint_pub = create_publisher<sensor_msgs::msg::JointState>("joint_states", 10);

        // Initialize joint names and positions
        joint_names = {"waist", "shoulder", "elbow", "wrist_angle", "wrist_rotate",
                       "left_finger", "right_finger"};
        positions = {0.0, 0.0, 0.0, 0.0, 0.0, 0.037, -0.037};

        // Empty service callbacks (just return success)
        auto empty_torque = [](
            const std::shared_ptr<interbotix_xs_msgs::srv::TorqueEnable::Request>,
            std::shared_ptr<interbotix_xs_msgs::srv::TorqueEnable::Response>) {};
        auto empty_modes = [](
            const std::shared_ptr<interbotix_xs_msgs::srv::OperatingModes::Request>,
            std::shared_ptr<interbotix_xs_msgs::srv::OperatingModes::Response>) {};
        auto empty_gains = [](
            const std::shared_ptr<interbotix_xs_msgs::srv::MotorGains::Request>,
            std::shared_ptr<interbotix_xs_msgs::srv::MotorGains::Response>) {};
        auto empty_regs = [](
            const std::shared_ptr<interbotix_xs_msgs::srv::RegisterValues::Request>,
            std::shared_ptr<interbotix_xs_msgs::srv::RegisterValues::Response>) {};
        auto empty_reboot = [](
            const std::shared_ptr<interbotix_xs_msgs::srv::Reboot::Request>,
            std::shared_ptr<interbotix_xs_msgs::srv::Reboot::Response>) {};

        // Create all the services xsarm_robot.py expects
        torque_srv = create_service<interbotix_xs_msgs::srv::TorqueEnable>(
            "torque_enable", empty_torque);
        modes_srv = create_service<interbotix_xs_msgs::srv::OperatingModes>(
            "set_operating_modes", empty_modes);
        gains_srv = create_service<interbotix_xs_msgs::srv::MotorGains>(
            "set_motor_pid_gains", empty_gains);
        set_regs_srv = create_service<interbotix_xs_msgs::srv::RegisterValues>(
            "set_motor_registers", empty_regs);
        get_regs_srv = create_service<interbotix_xs_msgs::srv::RegisterValues>(
            "get_motor_registers", empty_regs);
        reboot_srv = create_service<interbotix_xs_msgs::srv::Reboot>(
            "reboot_motors", empty_reboot);
        
        robot_info_srv = create_service<interbotix_xs_msgs::srv::RobotInfo>(
            "get_robot_info",
            std::bind(&FakeSDK::robot_info_cb, this, 
                      std::placeholders::_1, std::placeholders::_2));

        // Publish joint states at 50Hz
        timer_ = create_wall_timer(20ms, std::bind(&FakeSDK::publish_joints, this));

        RCLCPP_INFO(get_logger(), "Fake SDK ready");
    }

private:
    rclcpp::Subscription<interbotix_xs_msgs::msg::JointGroupCommand>::SharedPtr group_sub;
    rclcpp::Subscription<interbotix_xs_msgs::msg::JointSingleCommand>::SharedPtr single_sub;
    rclcpp::Publisher<sensor_msgs::msg::JointState>::SharedPtr joint_pub;
    rclcpp::TimerBase::SharedPtr timer_;

    rclcpp::Service<interbotix_xs_msgs::srv::TorqueEnable>::SharedPtr torque_srv;
    rclcpp::Service<interbotix_xs_msgs::srv::OperatingModes>::SharedPtr modes_srv;
    rclcpp::Service<interbotix_xs_msgs::srv::MotorGains>::SharedPtr gains_srv;
    rclcpp::Service<interbotix_xs_msgs::srv::RegisterValues>::SharedPtr set_regs_srv;
    rclcpp::Service<interbotix_xs_msgs::srv::RegisterValues>::SharedPtr get_regs_srv;
    rclcpp::Service<interbotix_xs_msgs::srv::Reboot>::SharedPtr reboot_srv;
    rclcpp::Service<interbotix_xs_msgs::srv::RobotInfo>::SharedPtr robot_info_srv;

    std::vector<std::string> joint_names;
    std::vector<double> positions;

    void group_cb(const interbotix_xs_msgs::msg::JointGroupCommand::SharedPtr msg)
    {
        for (size_t i = 0; i < msg->cmd.size() && i < 5; i++) {
            positions[i] = msg->cmd[i];
        }
    }

    void single_cb(const interbotix_xs_msgs::msg::JointSingleCommand::SharedPtr msg)
    {
        for (size_t i = 0; i < joint_names.size(); i++) {
            if (joint_names[i] == msg->name) {
                positions[i] = msg->cmd;
                break;
            }
        }
    }

    void robot_info_cb(
        const std::shared_ptr<interbotix_xs_msgs::srv::RobotInfo::Request>,
        std::shared_ptr<interbotix_xs_msgs::srv::RobotInfo::Response> res)
    {
        res->joint_names = {"waist", "shoulder", "elbow", "wrist_angle", "wrist_rotate"};
        res->joint_ids = {1, 2, 4, 6, 7};
        res->joint_lower_limits = {-3.14, -1.88, -2.14, -1.74, -3.14};
        res->joint_upper_limits = {3.14, 1.99, 1.61, 2.15, 3.14};
        res->joint_velocity_limits = {3.14, 3.14, 3.14, 3.14, 3.14};
        res->num_joints = 5;
        res->name = {"arm"};
    }

    void publish_joints()
    {
        auto msg = sensor_msgs::msg::JointState();
        msg.header.stamp = now();
        msg.name = joint_names;
        msg.position = positions;
        joint_pub->publish(msg);
    }
};

int main(int argc, char ** argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<FakeSDK>());
    rclcpp::shutdown();
    return 0;
}