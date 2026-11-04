#include <Arduino.h>
#include <esp_now.h>
#include <WiFi.h>
#include <esp_wifi.h>
#include <Wire.h>
#include <Adafruit_BNO055.h>

#define CHANNEL 1

Adafruit_BNO055 bno = Adafruit_BNO055(55, 0x29); //upperarm
Adafruit_BNO055 bno2 = Adafruit_BNO055(55, 0x28); //forearm
uint8_t receiverMac[6] = {}; //Dongle  MacAdress
esp_now_peer_info_t slave;
unsigned long lastSend = 0;
const unsigned long refreshRate = 15 //in ms, bno055 hz is 100Hz/10ms, however that will draw more power

struct ImuArmData {
  bool Connected;
  float Linear_x;
  float Linear_y;
  float Linear_z;
  float Roll;
  float Pitch;
  float Yaw;
};

struct ArmMsg {
  ImuArmData upperArm;
  ImuArmData foreArm;
};

ArmMsg packet;

void readIMU(Adafruit_BNO055 &sensor, ImuArmData &data);
void espSetup();


void setup() {
  Serial.begin(115200);
  Wire.begin(8, 9);
  espSetup();

}

void loop() {
  if (millis() - lastSend >= refreshRate){
    lastSend += refreshRate;
    readIMU(bno,  &ArmMsg.upperArm);
    readIMU(bno2, &ArmMsg.foreArm);
    esp_now_send(slave.peer_addr, (uint8_t *)&ArmMsg, sizeof(ArmMsg));
  }
}

void readIMU(Adafruit_BNO055 &sensor, ImuArmData &msg) {
  imu::Vector<3> accel = sensor.getVector(Adafruit_BNO055::VECTOR_ACCELEROMETER);
  imu::Vector<3> euler = sensor.getVector(Adafruit_BNO055::VECTOR_EULER);

  msg.Connected = 1;
  msg.Connected = true;
  msg.linear_acceleration.x = accel.x();
  msg.linear_acceleration.y = accel.y();
  msg.linear_acceleration.z = accel.z();
  msg.angular_velocity.x = euler.x() * (M_PI / 180.0);
  msg.angular_velocity.y = euler.y() * (M_PI / 180.0);
  msg.angular_velocity.z = euler.z() * (M_PI / 180.0);
}

void espSetup(){
  WiFi.mode(WIFI_STA);
  esp_now_init();
  esp_now_register_send_cb(OnDataSent);
 
  // ScanForSlave();
  memset(&slave, 0, sizeof(slave));
  memcpy(slave.peer_addr, receiverMac, 6);
  slave.channel = CHANNEL;
  slave.encrypt = 0;        
  

  //check for IMU
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


  
  if (esp_now_add_peer(&slave) != ESP_OK) {
    Serial.println("Failed to add peer!");
  } 
  
  else {
    Serial.println("Peer added successfully.");
  } 
}