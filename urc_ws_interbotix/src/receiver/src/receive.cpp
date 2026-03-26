#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/imu.hpp"


//make sure micro ros agent is on
//ros2 run micro_ros_agent micro_ros_agent udp4 --port 8888
//or just use the launch file
int queue_size = 10;
class IMUreceiveData : public rclcpp::Node{
//sensor_msgs/imu format
//header
//orientation
//angular_velocity
//linear_acceleration
//covariance arrays
public:
    IMUreceiveData()
    : Node("imu_receive_data"){                           //don't know topic names yet 
       // handSub =  create_subscription<sensor_msgs::msg::Imu>("handIMU/data", queue_size, std::bind(&IMUreceiveData::handIMU_callback, this, std::placeholders::_1));
        //handPub = create_publisher<sensor_msgs::msg::Imu>("topic2_name", queue_size);
       
       
        armSub1 =  create_subscription<sensor_msgs::msg::Imu>("/urc/arm/imu1", queue_size, std::bind(&IMUreceiveData::armIMU1_callback, this, std::placeholders::_1));
        armSub2 =  create_subscription<sensor_msgs::msg::Imu>("/urc/arm/imu2", queue_size, std::bind(&IMUreceiveData::armIMU2_callback, this, std::placeholders::_1));

        armPub1 = create_publisher<sensor_msgs::msg::Imu>("/urc/arm/output1", queue_size);
        armPub2 = create_publisher<sensor_msgs::msg::Imu>("/urc/arm/output2", queue_size);
    }


private:
    //declarations
   // rclcpp::Subscription<sensor_msgs::msg::Imu>::SharedPtr handSub;
    //rclcpp::Publisher<sensor_msgs::msg::Imu>::SharedPtr handPub;
    
    rclcpp::Subscription<sensor_msgs::msg::Imu>::SharedPtr armSub1;
    rclcpp::Publisher<sensor_msgs::msg::Imu>::SharedPtr armPub1;
   
    rclcpp::Subscription<sensor_msgs::msg::Imu>::SharedPtr armSub2;
    rclcpp::Publisher<sensor_msgs::msg::Imu>::SharedPtr armPub2;
   /*
    void handIMU_callback(const sensor_msg::msg::Imu::SharedPtr msg){
        handPub->publish(*msg);
     
    }
*/
    void armIMU1_callback(const sensor_msgs::msg::Imu::SharedPtr msg){
       
        armPub1->publish(*msg);
    }

    void armIMU2_callback(const sensor_msgs::msg::Imu::SharedPtr msg){
       
        armPub2->publish(*msg);
    }

};



int main(int argc, char* argv[]){

    rclcpp::init(argc,argv);
    rclcpp::spin(std::make_shared<IMUreceiveData>());
    rclcpp::shutdown();

}

