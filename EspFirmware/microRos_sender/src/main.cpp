#include <Arduino.h>
#include <WiFi.h>
#include <Wire.h>
#include <Adafruit_BNO055.h>
#include <rcl/rcl.h>
#include <rclc/executor.h>
#include <sensor_msgs/msg/imu.h>
#include <micro_ros_platformio.h>
#include <rclc/rclc.h>

//declarations
Adafruit_BNO055 bno = Adafruit_BNO055(55, 0x28);
Adafruit_BNO055 bno2 = Adafruit_BNO055(55, 0x29);



//micro ros declarations

rcl_publisher_t publisherArm1;
rcl_publisher_t publisherArm2;
//rcl_publisher_t publisherHand;
sensor_msgs__msg__Imu armMsg1;
sensor_msgs__msg__Imu armMsg2;
//sensor_msgs__msg__Imu handMsg;
rclc_executor_t executor;
rclc_support_t support;
rcl_allocator_t allocator;
rcl_node_t node;



//error checker
#define RCCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){error_loop();}}
#define RCSOFTCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){}}


// Error handle loop
void error_loop() {
  while(1) {
    delay(100);
    printf("You are in error loop hell");
  }
}
 
void readIMU(Adafruit_BNO055 &sensor, sensor_msgs__msg__Imu &msg) {
  imu::Vector<3> accel = sensor.getVector(Adafruit_BNO055::VECTOR_ACCELEROMETER);
  imu::Vector<3> euler = sensor.getVector(Adafruit_BNO055::VECTOR_EULER);

  msg.linear_acceleration.x = accel.x();
  msg.linear_acceleration.y = accel.y();
  msg.linear_acceleration.z = accel.z();
  msg.angular_velocity.x = euler.x() * (M_PI / 180.0);
  msg.angular_velocity.y = euler.y() * (M_PI / 180.0);
  msg.angular_velocity.z = euler.z() * (M_PI / 180.0);
}

//pi ssid is pispot, password is pi123456
void setup() {
  Serial.begin(115200);
  Wire.begin(21, 22); //8,9
  //micro ros udp wifi connection with pi
  IPAddress agent_ip(10, 42, 0, 1); //this is the pi's Ip address
  size_t agent_port = 8888;
  char ssid[] = "pispot";
  char psk[]= "pi123456";
  Serial.println("Connecting to WiFi...");
  set_microros_wifi_transports(ssid, psk, agent_ip, agent_port);
  Serial.println("Connected!");
  delay(2000);



//Check for Both bno

  if (!bno.begin()) {
    Serial.println("BNO055 not found");
    while (1);
  }

  bno.setExtCrystalUse(true);

   if (!bno2.begin()) {
    Serial.println("BNO055 2 not found");
    while (1);
  }

  bno2.setExtCrystalUse(true);

  allocator = rcl_get_default_allocator();

  //create init_options
  RCCHECK(rclc_support_init(&support, 0, NULL, &allocator));

  // create node
  RCCHECK(rclc_node_init_default(&node, "micro_ros_platformio_node", "", &support));

  // create publishers
  RCCHECK(rclc_publisher_init_default(
    &publisherArm1,
    &node,
    ROSIDL_GET_MSG_TYPE_SUPPORT(sensor_msgs, msg, Imu),
    "/urc/arm/imu1"));

    RCCHECK(rclc_publisher_init_default(
    &publisherArm2,
    &node,
    ROSIDL_GET_MSG_TYPE_SUPPORT(sensor_msgs, msg, Imu),
    "/urc/arm/imu2"));
    /*
    RCCHECK(rclc_publisher_init_default(
    &publisherHand,
    &node,
    ROSIDL_GET_MSG_TYPE_SUPPORT(sensor_msgs, msg, Imu),
    "/urc/hand/imu"));
    */



   //create executor
  RCCHECK(rclc_executor_init(&executor, &support.context, 2, &allocator));
    }

//initialize and use micro ros
  


void loop() {
readIMU(bno,armMsg1);// uncomment if you have bno connected
readIMU(bno2,armMsg2);


//Publish 
rcl_publish(&publisherArm1, &armMsg1, NULL);
rcl_publish(&publisherArm2, &armMsg2, NULL);

//rcl_publish(&publisherHand, &handMsg, NULL); hand publisher


//spins the node and adds delay
RCSOFTCHECK(rclc_executor_spin_some(&executor, RCL_MS_TO_NS(100)));
}


