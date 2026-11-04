# URC
URC stands for Universal Robotics Controller. It is split into two parts, the glove and the dongle. 
The goal of the URC is to very simply plug in a dongle, wear a glove, and be able to control a robot with your arm.

Glove:
The glove consists of 3 BNO055 IMU's, as well as two Esp-32 S3's. The Imu's go on the upper arm, the forearm, and the hand.
The hand also contains 4 force resistors for keybinds. The Esp's collect all the sensor information and use the ESP-NOW protocol to
send the data to the dongle.

Dongle:
The dongle is architecturally split up into a few different parts that make the URC actually universal. 
1. The dongle establishes a TinyUSB connection with robot
2. The dongle is configured as a master for ESP-NOW and receives all the sensor information
3. The dongle will have profiles for different types of, or even specific robots which will change the ROS message it publishes
4. The dongle will use espp/RTPS to publish straight to the robots ROS topics on a private network
