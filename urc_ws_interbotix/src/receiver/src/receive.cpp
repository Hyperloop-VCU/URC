#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/imu.hpp"
#include <map>
#include <memory>
#include <string>
#include "sensor_msgs/msg/joy.hpp"
//#include "interbotix_xs_msgs/msg/arm_joy.hpp"
#include <chrono>
#include "interbotix_xs_msgs/msg/joint_group_command.hpp"
#include "interbotix_xs_msgs/msg/joint_single_command.hpp"
#include "std_msgs/msg/int32_multi_array.hpp"



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
    : Node("imu_receive_data"){                          

        this->declare_parameter("mode", "dof");
        std::string mode = this->get_parameter("mode").as_string();

        //hand
        handSub =  create_subscription<sensor_msgs::msg::Imu>("/urc/hand/imu", queue_size, std::bind(&IMUreceiveData::handIMU_callback, this, std::placeholders::_1));
       
        fsrSub = create_subscription<std_msgs::msg::Int32MultiArray>("/urc/hand/fsr", queue_size, std::bind(&IMUreceiveData::fsr_callback,this,std::placeholders::_1));
       //upper arm
        armSub1 =  create_subscription<sensor_msgs::msg::Imu>("/urc/arm/imu1", queue_size, std::bind(&IMUreceiveData::armIMU1_callback, this, std::placeholders::_1));
        
        //forearm
        armSub2 =  create_subscription<sensor_msgs::msg::Imu>("/urc/arm/imu2", queue_size, std::bind(&IMUreceiveData::armIMU2_callback, this, std::placeholders::_1));
        
        //joystick publisher
        joyPub = create_publisher<sensor_msgs::msg::Joy>("/wx250/commands/joy_raw", queue_size);
        
        //Dof publisher
        dofPub = create_publisher<interbotix_xs_msgs::msg::JointGroupCommand>("/wx250/commands/joint_group", queue_size);
        gripperPub = create_publisher<interbotix_xs_msgs::msg::JointSingleCommand>("/wx250/commands/joint_single", queue_size);

        //check what mode and then initialize the proper callback, potentially could map mode to an fsr button
        if (mode == "dof"){
            timer_ = this->create_wall_timer(
            20ms, std::bind(&IMUreceiveData::dof_timer_callback, this));
        } 
        else if (mode == "joy" ){
            timer_ = this->create_wall_timer(
            20ms, std::bind(&IMUreceiveData::joy_timer_callback, this));

        }
        
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
    rclcpp::Subscription<std_msgs::msg::Int32MultiArray>::SharedPtr fsrSub;
    rclcpp::Publisher<sensor_msgs::msg::Joy>::SharedPtr joyPub;
    rclcpp::Publisher<interbotix_xs_msgs::msg::JointGroupCommand>::SharedPtr dofPub;
    rclcpp::Publisher<interbotix_xs_msgs::msg::JointSingleCommand>::SharedPtr gripperPub;


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

    //calibration to set imu 0 and robot 0 the same. try to have a consistent start up spot. may add imu calibrated to fsr press
    float imu1_roll_offset = 0.0;
    float imu1_pitch_offset = 0.0;
    float imu1_yaw_offset = 0.0;
    bool imu1_calibrated = false;

    //forearm offset
    float imu2_roll_offset = 0.0;
    float imu2_pitch_offset = 0.0;
    float imu2_yaw_offset = 0.0;
    bool imu2_calibrated = false;

    //hand offset
    float imu3_roll_offset = 0.0;
    float imu3_pitch_offset = 0.0;
    float imu3_yaw_offset = 0.0;
    bool imu3_calibrated = false;



    const int fsr_threshold = 10; //it is pull down so when pressed fsr is 0
    int fsr_values[4] = {0, 0, 0, 0};
    bool home_override;
    rclcpp::Time home_start;
    //index 0 = index
    //index 1 = middle
    //index 2 = ring
    //index 3 = pinky
    //robot scaling
    float scale_factor = 0.0;

    void armIMU1_callback(const sensor_msgs::msg::Imu::SharedPtr msg){
        
        //calibration
        if (!imu1_calibrated) {
            imu1_roll_offset = msg->angular_velocity.x;
            imu1_pitch_offset = msg->angular_velocity.y;
            imu1_yaw_offset = msg->angular_velocity.z;
            imu1_calibrated = true;
        }
        //actual constant mapping
        armImu1_angles.roll = msg->angular_velocity.x - imu1_roll_offset;
        armImu1_angles.pitch = msg->angular_velocity.y - imu1_pitch_offset;
        armImu1_angles.yaw = msg->angular_velocity.z - imu1_yaw_offset;
    }

    void armIMU2_callback(const sensor_msgs::msg::Imu::SharedPtr msg){
       
        if (!imu2_calibrated) {
            imu2_roll_offset = msg->angular_velocity.x;
            imu2_pitch_offset = msg->angular_velocity.y;
            imu2_yaw_offset = msg->angular_velocity.z;
            imu2_calibrated = true;
        }
        
        armImu2_angles.roll = msg->angular_velocity.x - imu2_roll_offset;
        armImu2_angles.pitch = msg->angular_velocity.y - imu2_pitch_offset;
        armImu2_angles.yaw = msg->angular_velocity.z - imu2_yaw_offset;
    }
    void handIMU_callback(const sensor_msgs::msg::Imu::SharedPtr msg){
       
        if (!imu3_calibrated) {
            imu3_roll_offset = msg->angular_velocity.x;
            imu3_pitch_offset = msg->angular_velocity.y;
            imu3_yaw_offset = msg->angular_velocity.z;
            imu3_calibrated = true;
        }

        handImu_angles.roll = msg->angular_velocity.x;
        handImu_angles.pitch = msg->angular_velocity.y;
        handImu_angles.yaw = msg->angular_velocity.z;
    }

    
    void fsr_callback(const std_msgs::msg::Int32MultiArray::SharedPtr msg){
        for (size_t i = 0; i < 4 && i < msg->data.size(); i++){
            fsr_values[i] = msg->data[i];
        }

        fsr_actions();
        
    }

    void fsr_actions(){
        if (fsr_values[1] < fsr_threshold){
            imu1_calibrated = false;
            imu2_calibrated = false;
            imu3_calibrated = false;
        }

        if (fsr_values[2] <fsr_threshold){
            home_override = true;
            home_start = this->now();
        }
    }
    
    void set_axis(sensor_msgs::msg::Joy & msg, int index, float angle){  

        if (angle > THRESHOLD) msg.axes[index] = 1.0;
        else if (angle < -THRESHOLD) msg.axes[index] = -1.0;

    }   

    

    void set_buttons(sensor_msgs::msg::Joy & msg, int pos_index, int neg_index, float angle){
        if (angle > THRESHOLD) msg.buttons[pos_index] = 1;
        else if (angle < -THRESHOLD) msg.buttons[neg_index] = 1;
    }

    void joy_timer_callback()
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
        set_buttons(joy_msg, ps4.at("WAIST_CCW"), ps4.at("WAIST_CW"), armImu1_angles.roll); //Waist(move arm side to side)
        set_buttons(joy_msg, ps4.at("EE_Y_INC"), ps4.at("EE_Y_DEC"), handImu_angles.roll); //ee_y(rotate hand to rotate gripper)
        //publish to joy
        joyPub->publish(joy_msg);
    }
    


    void dof_timer_callback(){

        if (home_override) {
        if ((this->now() - home_start).seconds() > 2.0) {
            home_override = false;
        } else {
            auto home_msg = interbotix_xs_msgs::msg::JointGroupCommand();
            home_msg.name = "arm";
            home_msg.cmd = {0.0, 0.0, 0.0, 0.0, 0.0};
            dofPub->publish(home_msg);
            return;
            }
    }


        auto dof_msg = interbotix_xs_msgs::msg::JointGroupCommand(); //just making a jointgroup object, this is a custom interbotix one
        dof_msg.name = "arm"; //there are two names in the message, arm and gripper. you need to set the proper name.
        dof_msg.cmd = { //important to keep track of what is in each index, the msg type predefines what is what
            armImu1_angles.roll,     // index 0 → waist
            -armImu1_angles.pitch,    // index 1 → shoulder  
            armImu2_angles.pitch,    // index 2 → elbow
            handImu_angles.pitch,    // index 3 → wrist_angle
            handImu_angles.roll      // index 4 → wrist_rotate
        };

        
       

        
        
        dofPub->publish(dof_msg);
        
    }
    rclcpp::TimerBase::SharedPtr timer_;
};



int main(int argc, char* argv[]){

    rclcpp::init(argc,argv);
    rclcpp::spin(std::make_shared<IMUreceiveData>());
    rclcpp::shutdown();

}

