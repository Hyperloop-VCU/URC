#include <Arduino.h>
#include <WiFi.h>
#include <Wire.h>
#include <Adafruit_BNO055.h>
#include <rcl/rcl.h>
#include <rclc/executor.h>
#include <sensor_msgs/msg/imu.h>
#include <micro_ros_platformio.h>
#include <rclc/rclc.h>
#include <rmw_microros/rmw_microros.h>
#include <std_msgs/msg/int32_multi_array.h>

//declarations

Adafruit_BNO055 bno = Adafruit_BNO055(55, 0x29); //upperarm
Adafruit_BNO055 bno2 = Adafruit_BNO055(55, 0x28); //forearm



//micro ros declarations

rcl_publisher_t publisherArm1;
rcl_publisher_t publisherArm2;
rcl_publisher_t publisherHand;
rcl_publisher_t publisherFsr;
sensor_msgs__msg__Imu armMsg1;
sensor_msgs__msg__Imu armMsg2;
sensor_msgs__msg__Imu handMsg;
std_msgs__msg__Int32MultiArray fsrMsg;
rclc_executor_t executor;
rclc_support_t support;
rcl_allocator_t allocator;
rcl_node_t node;

int fsr_values[4] = {0, 0, 0, 0};

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

void serialHandImu(){
  if(Serial1.available()){
    String line = Serial1.readStringUntil('\n');

    float vals[7];
    int idx = 0;
    int start = 0;
    int comma;


    while ((comma = line.indexOf(',',start)) != -1 && idx < 6){
      vals[idx++] = line.substring(start,comma).toFloat();
      start = comma + 1;
    }

    vals[6] = line.substring(start).toFloat();

    handMsg.angular_velocity.x = vals[0] * (M_PI / 180.0);
    handMsg.angular_velocity.y = vals[1] * (M_PI / 180.0);
    handMsg.angular_velocity.z = vals[2] * (M_PI / 180.0);
        

    fsr_values[0] = (int)vals[3];
    fsr_values[1] = (int)vals[4];
    fsr_values[2] = (int)vals[5];
    fsr_values[3] = (int)vals[6];
  }
}

//pi ssid is pispot, password is pi123456
void setup() {
  Serial.begin(115200);
  Serial1.begin(115200, SERIAL_8N1,44,43); //uart serial
  delay(1000);
  Serial.println("stuff");
  //Wire.begin(4, 5); //8,9
  Wire.begin(5,6);
  //micro ros udp wifi connection with pi
  IPAddress agent_ip(10, 42, 0, 1); //this is the pi's Ip address
  //IPAddress agent_ip(10, 0, 0, 171);
  size_t agent_port = 8888;
  char ssid[] = "pispot";
  char psk[]= "pi123456";
  
  Serial.println("Connecting to WiFi...");
  set_microros_wifi_transports(ssid, psk, agent_ip, agent_port);
  Serial.println("Waiting for micro-ROS agent...");
  while (rmw_uros_ping_agent(1000, 1) != RMW_RET_OK) {
    Serial.println("Agent not found, retrying...");
  delay(500);
}
  Serial.println("Agent found!");
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

    
    RCCHECK(rclc_publisher_init_default(
    &publisherHand,
    &node,
    ROSIDL_GET_MSG_TYPE_SUPPORT(sensor_msgs, msg, Imu),
    "/urc/hand/imu"));

    RCCHECK(rclc_publisher_init_default(
    &publisherFsr,
    &node,
    ROSIDL_GET_MSG_TYPE_SUPPORT(sensor_msgs, msg, Imu),
    "/urc/hand/fsr"));
    
    //initialize fsr msg
    fsrMsg.data.capacity = 4;
    fsrMsg.data.size = 4;
    fsrMsg.data.data = fsr_values;



   //create executor
  RCCHECK(rclc_executor_init(&executor, &support.context, 2, &allocator));
    }

//initialize and use micro ros
  


void loop() {
readIMU(bno,armMsg1);// uncomment if you have bno connected
readIMU(bno2,armMsg2);
serialHandImu();



//Publish 
rcl_publish(&publisherArm1, &armMsg1, NULL);
rcl_publish(&publisherArm2, &armMsg2, NULL);
rcl_publish(&publisherHand, &handMsg, NULL); 
rcl_publish(&publisherFsr, &fsrMsg, NULL); 

//spins the node and adds delay
RCSOFTCHECK(rclc_executor_spin_some(&executor, RCL_MS_TO_NS(100)));
}


