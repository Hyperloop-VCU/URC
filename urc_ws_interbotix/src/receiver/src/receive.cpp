#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/imu.hpp"
#include <map>
#include <memory>
#include <string>
#include "sensor_msgs/msg/joy.hpp"
//#include "interbotix_xs_msgs/msg/arm_joy.hpp"
#include <chrono>

using namespace std::chrono_literals;
//make sure micro ros agent is on
//ros2 run micro_ros_agent micro_ros_agent udp4 --port 8888
//or just use the launch file
int queue_size = 10;



typedef std::map<std::string, int> button_mappings;
// PS4 Controller button mappings
//13 ps4 buttons from 0-12
static const button_mappings ps4 = {
  {"GRIPPER_PWM_DEC", 0},  // buttons start here
  {"GRIPPER_RELEASE", 1},
  {"GRIPPER_PWM_INC", 2},
  {"GRIPPER_GRASP", 3},
  {"EE_Y_INC", 4},
  {"EE_Y_DEC", 5},
  {"WAIST_CCW", 6},
  {"WAIST_CW", 7},
  {"SLEEP_POSE", 8},
  {"HOME_POSE", 9},
  {"TORQUE_ENABLE", 10},
  {"FLIP_EE_X", 11},
  {"FLIP_EE_ROLL", 12},
  {"EE_X", 0},             // axes start here
  {"EE_Z", 1},
  {"EE_ROLL", 3},
  {"EE_PITCH", 4},
  {"SPEED_TYPE", 6},
  {"SPEED", 7}
};


//sensor_msgs/imu format
//header
//orientation
//angular_velocity
//linear_acceleration
//covariance arrays

//mapping for arm
/*

imu1(upper arm)
    -pitch = ee_Z(move arm up and down)
    -yaw = Waist(move arm side to side)
Imu2(forearm)
    -pitch = ee_x(retract forearm to move arm forward and back)
    -roll = ee_roll(spin forearm to spin end effector)
Imu3(hand)
    -pitch = ee_pitch(rotate the gripper up and down)
    -roll = ee_y(rotate hand to rotate gripper)
Force resistors
    -home
    -stop
    -
*/

class IMUreceiveData : public rclcpp::Node{
public:
    IMUreceiveData()
    : Node("imu_receive_data"){                           //don't know topic names yet 
        handSub =  create_subscription<sensor_msgs::msg::Imu>("handIMU/data", queue_size, std::bind(&IMUreceiveData::handIMU_callback, this, std::placeholders::_1));
        //handPub = create_publisher<sensor_msgs::msg::Imu>("topic2_name", queue_size);
       
       //upper arm
        armSub1 =  create_subscription<sensor_msgs::msg::Imu>("/urc/arm/imu1", queue_size, std::bind(&IMUreceiveData::armIMU1_callback, this, std::placeholders::_1));
        
        //forearm
        armSub2 =  create_subscription<sensor_msgs::msg::Imu>("/urc/arm/imu2", queue_size, std::bind(&IMUreceiveData::armIMU2_callback, this, std::placeholders::_1));
        
        //joystick publisher
        finalPub = create_publisher<sensor_msgs::msg::Joy>("/wx250/commands/joy_raw", queue_size);
        

        timer_ = this->create_wall_timer(
        20ms, std::bind(&IMUreceiveData::timer_callback, this));


    }

   // rclcpp::Subscription<sensor_msgs::msg::Imu>::SharedPtr handSub;
    //rclcpp::Publisher<sensor_msgs::msg::Imu>::SharedPtr handPub;
   // rclcpp::Publisher<sensor_msgs::msg::Imu>::SharedPtr armPub1;
   // rclcpp::Publisher<sensor_msgs::msg::Imu>::SharedPtr armPub2;
   /*
    void handIMU_callback(const sensor_msg::msg::Imu::SharedPtr msg){
        handPub->publish(*msg);
     
    }
*/

    //declarations
private:

    rclcpp::Subscription<sensor_msgs::msg::Imu>::SharedPtr armSub1;
    rclcpp::Subscription<sensor_msgs::msg::Imu>::SharedPtr armSub2;
    rclcpp::Subscription<sensor_msgs::msg::Imu>::SharedPtr handSub;

    rclcpp::Publisher<sensor_msgs::msg::Joy>::SharedPtr finalPub;

    //button_mappings cntlr = ps4;
    //std::string controller_type;
    const double THRESHOLD = 0.2;
    struct EulerAngles 
    {
    float roll = 0.0;
    float pitch = 0.0;
    float yaw = 0.0;
    };

    EulerAngles armImu1_angles;
    EulerAngles armImu2_angles;
    EulerAngles handImu_angles;




    void armIMU1_callback(const sensor_msgs::msg::Imu::SharedPtr msg){
       
        armImu1_angles.roll = msg->angular_velocity.x;
        armImu1_angles.pitch = msg->angular_velocity.y;
        armImu1_angles.yaw = msg->angular_velocity.z;
    }

    void armIMU2_callback(const sensor_msgs::msg::Imu::SharedPtr msg){
       
        
        armImu2_angles.roll = msg->angular_velocity.x;
        armImu2_angles.pitch = msg->angular_velocity.y;
        armImu2_angles.yaw = msg->angular_velocity.z;
    }
    void handIMU_callback(const sensor_msgs::msg::Imu::SharedPtr msg){
       
        
        handImu_angles.roll = msg->angular_velocity.x;
        handImu_angles.pitch = msg->angular_velocity.y;
        handImu_angles.yaw = msg->angular_velocity.z;
    }

    void set_axis(sensor_msgs::msg::Joy & msg, int index, float angle){  

        if (angle > THRESHOLD) msg.axes[index] = 1.0;
        else if (angle < -THRESHOLD) msg.axes[index] = -1.0;

    }   

    

    void set_buttons(sensor_msgs::msg::Joy & msg, int pos_index, int neg_index, float angle){
        if (angle > THRESHOLD) msg.buttons[pos_index] = 1;
        else if (angle < -THRESHOLD) msg.buttons[neg_index] = 1;
    }

    void timer_callback()
    {
        auto joy_msg = sensor_msgs::msg::Joy();
        
        //8 axes on the ps4
        joy_msg.axes.resize(8, 0.0);
        //13 buttons on the ps4, just initializing an empty array
        joy_msg.buttons.resize(13, 0);

        //map axis
        set_axis(joy_msg, ps4.at("EE_Z"), armImu1_angles.pitch); //ee_Z(move arm up and down)
        set_axis(joy_msg, ps4.at("EE_X"), armImu2_angles.pitch); //ee_x(retract forearm to move arm forward and back)
        set_axis(joy_msg, ps4.at("EE_ROLL"), armImu2_angles.roll); //ee_roll(spin forearm to spin end effector)
        set_axis(joy_msg, ps4.at("EE_PITCH"), handImu_angles.pitch); //ee_pitch(rotate the gripper up and down)


        //map buttons
        set_buttons(joy_msg, ps4.at("WAIST_CCW"), ps4.at("WAIST_CW"), armImu1_angles.yaw); //Waist(move arm side to side)
        set_buttons(joy_msg, ps4.at("EE_Y_INC"), ps4.at("EE_Y_DEC"), handImu_angles.roll); //ee_y(rotate hand to rotate gripper)
        //publish to joy
        finalPub->publish(joy_msg);
    }
    rclcpp::TimerBase::SharedPtr timer_;
};



int main(int argc, char* argv[]){

    rclcpp::init(argc,argv);
    rclcpp::spin(std::make_shared<IMUreceiveData>());
    rclcpp::shutdown();

}

