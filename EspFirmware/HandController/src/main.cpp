#include <Arduino.h>
#include <esp_now.h>
#include <WiFi.h>
#include <esp_wifi.h>
#include <Wire.h>
#include <Adafruit_BNO055.h>
#include "urc_msgs.h"

#define CHANNEL 1
#define FSR_PIN 1
Adafruit_BNO055 bno = Adafruit_BNO055(55, 0x28);
uint8_t receiverMac[6] = {}; //Dongle
esp_now_peer_info_t slave;
unsigned long lastSend = 0;
const unsigned long refreshRate = 15; //in ms, bno055 hz is 100Hz/10ms, however that will draw more power
int fsr_values[4] = {0, 0, 0, 0};
volatile bool button_on = true;
const int button_pin = 1;
volatile unsigned long lastInterruptTime = 0;
const int FSR_PINS[4] = {A0, A1, A2, A3};
//A0 = index
//A1 = middle
//A2 = Ring
//A3 = pinky


HandMsg packet = {};
void readIMU(Adafruit_BNO055 &sensor, ImuData &data);
void espSetup();
void IRAM_ATTR handleButton();
void readFSR();
void OnDataSent(const wifi_tx_info_t *tx_info, esp_now_send_status_t status);

void setup() {
  Serial.begin(115200);
  analogReadResolution(12);
  analogSetAttenuation(ADC_11db);
  Wire.begin(8, 9);
  espSetup();
  packet.header.type = MSG_HAND;
}

void loop() {
  if (millis() - lastSend >= refreshRate){
    lastSend += refreshRate;
    readIMU(bno, packet.imu);
    int rawValue = analogRead(FSR_PIN);
    float voltage = rawValue *(3.3/4095.0);
    int pressure = map(rawValue, 0, 4095, 0, 100);
    packet.header.seq++;
    esp_now_send(slave.peer_addr, (uint8_t *)&packet, sizeof(packet));
  }
}

void readIMU(Adafruit_BNO055 &sensor, ImuData &msg) {
  imu::Vector<3> accel = sensor.getVector(Adafruit_BNO055::VECTOR_ACCELEROMETER);
  imu::Vector<3> euler = sensor.getVector(Adafruit_BNO055::VECTOR_EULER);

  msg.connected = 1;
  msg.linear_x = accel.x();
  msg.linear_y = accel.y();
  msg.linear_z = accel.z();
  msg.yaw   = euler.x() * (M_PI / 180.0); // BNO055 euler: x=Yaw, y=Pitch, z=Roll
  msg.pitch = euler.y() * (M_PI / 180.0);
  msg.roll  = euler.z() * (M_PI / 180.0);
}

void OnDataSent(const wifi_tx_info_t *tx_info, esp_now_send_status_t status) {
  Serial.print("Send status: ");
  Serial.println(status == ESP_NOW_SEND_SUCCESS ? "OK" : "FAIL");
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
  // TODO: 
}