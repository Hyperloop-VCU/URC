#include <Arduino.h>
#include <esp_now.h>
#include <WiFi.h>
#include <esp_wifi.h>
#include <Wire.h>
#include <Adafruit_BNO055.h>

#define CHANNEL 1
#define FSR_PIN 1
Adafruit_BNO055 bno = Adafruit_BNO055(55, 0x28);
uint8_t receiverMac[6] = {}; //Dongle
esp_now_peer_info_t slave;
slave.channel = CHANNEL;
unsigned long lastSend = 0;
const unsigned long refreshRate = 15 //in ms, bno055 hz is 100Hz/10ms, however that will draw more power
int fsr_values[4] = {0, 0, 0, 0};
volatile bool button_on = true;
const int button_pin = 1;
volatile unsigned long lastInterruptTime = 0;
const int FSR_PINS[4] = {A0, A1, A2, A3};
//A0 = index
//A1 = middle
//A2 = Ring
//A3 = pinky


struct ImuHandData {
  bool Connected;
  float Linear_x;
  float Linear_y;
  float Linear_z;
  float Roll;
  float Pitch;
  float Yaw;  
};

ImuHandData IMU1;
void readIMU(Adafruit_BNO055 &sensor, ImuArmData &data);
void espSetup();
void IRAM_ATTR handleButton();
void readFSR();

void setup() {
  Serial.begin(115200);
  analogReadResolution(12);
  analogSetAttenuation(ADC_11db);
  Wire.begin(8, 9);
  espSetup();
}

void loop() {
  if (millis() - lastSend >= refreshRate){
    lastSend += refreshRate;
    readIMU(bno, packet.IMU1)
    int rawValue = analogRead(FSR_PIN);
    float voltage = rawValue *(3.3/4095.0);
    int pressure = map(rawValue, 0, 4095, 0, 100);
    esp_now_send(slave.peer_addr, (uint8_t *)&IMU1, sizeof(IMU1));
  }
}

void readIMU(Adafruit_BNO055 &sensor, ImuArmData &msg) {
  imu::Vector<3> accel = sensor.getVector(Adafruit_BNO055::VECTOR_ACCELEROMETER);
  imu::Vector<3> euler = sensor.getVector(Adafruit_BNO055::VECTOR_EULER);
  
  msg.Connected = true;
  msg.linear_acceleration.x = accel.x();
  msg.linear_acceleration.y = accel.y();
  msg.linear_acceleration.z = accel.z();
  msg.angular_velocity.x = euler.x() * (M_PI / 180.0);
  msg.angular_velocity.y = euler.y() * (M_PI / 180.0);
  msg.angular_velocity.z = euler.z() * (M_PI / 180.0);
}
    
void IRAM_ATTR handleButton() {
  unsigned long now = millis();
  if(now - lastInterruptTime >= 150){
    button_on = !button_on;
    lastInterruptTime = now;
  }
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
  Serial.println(WiFi.macAddress());

  //check for IMU
  if (!bno.begin()) {
    Serial.println("BNO055 not found");
    while (1);
  }

  bno.setExtCrystalUse(true);
  
  if (esp_now_add_peer(&slave) != ESP_OK) {
    Serial.println("Failed to add peer!");
  }

  else {
    Serial.println("Peer added successfully.");
  }
}

void readFSR(){
  fsr_values[0] = (int)vals[3];
  fsr_values[1] = (int)vals[4];
  fsr_values[2] = (int)vals[5];
  fsr_values[3] = (int)vals[6];
}