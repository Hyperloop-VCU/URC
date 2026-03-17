#include <Arduino.h>
#include <esp_now.h>
#include <WiFi.h>
#include <esp_wifi.h>
#include <Wire.h>
#include <Adafruit_BNO055.h>


#define CHANNEL 1

Adafruit_BNO055 bno = Adafruit_BNO055(55, 0x28);
const int FSR_PIN = 1;
uint8_t receiverMac[6] = {0xC8, 0xF0, 0x9E, 0x50, 0x75, 0x3D};
esp_now_peer_info_t slave;

//slave.channel = CHANNEL;

struct ImuHandData {
  int Connected;
  float Linear_x;
  float Linear_y;
  float Linear_z;
  float Roll;
  float Pitch;
  float Yaw;
  float d7;
  float d8;
  float d9;
  float d10;
  
};

ImuHandData IMU1;
ImuHandData IMU2;


void OnDataSent(const uint8_t *mac_addr, esp_now_send_status_t status){
  Serial.print("I sent my data to--> ");

 // Serial.println(data);
}





//Get mac address

//Can be replaced for hardcoded MAC address
/*
void ScanForSlave(){
  int8_t scanResults = WiFi.scanNetworks();
  
  for (int i = 0; i < scanResults; ++i){
    String SSID = WiFi.SSID(i);
    String BSSIDstr = WiFi.BSSIDstr(i);
  
    if (SSID.indexOf("RX") == 0){
      int mac[6];
      if (6 == sscanf(BSSIDstr.c_str(), "%x:%x:%x:%x:%x:%x", &mac[0],&mac[1],&mac[2],&mac[3],&mac[4],&mac[5])){
        for(int ii = 0; ii <6; ++ii){
          slave.peer_addr[ii] = (uint8_t) mac[ii];
        }
    }

    slave.channel = CHANNEL;
    slave.encrypt = 0;
    break;

  }
  }
}

*/

void setup() {
  // put your setup code here, to run once:

  
  Serial.begin(115200);
  analogReadResolution(12);
  analogSetAttenuation(ADC_11db);
  Wire.begin(8, 9);
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
} else {
    Serial.println("Peer added successfully.");
}
  
  
  
  
  
  
  
  
  
  // ESP-NOW


/*
raymonds imprimis espnow setup: 

  WiFi.mode(WIFI_STA);
  esp_now_init();
  memcpy(peerInfo.peer_addr, B_MAC, 6);
  peerInfo.channel = 0;  
  peerInfo.encrypt = true;
  esp_now_set_pmk((uint8_t *)PMK);
  for (uint8_t i = 0; i < 16; i++) peerInfo.lmk[i] = LMK[i];
  esp_now_add_peer(&peerInfo);
  esp_now_register_recv_cb(esp_now_recv_cb_t(receiveDataCB));
  esp_now_register_send_cb(esp_now_send_cb_t(sendDataCB));



*/




}

void loop() {
  // put your main code here, to run repeatedly:
  int rawValue = analogRead(FSR_PIN);
  float voltage = rawValue *(3.3/4095.0);

  int pressure = map(rawValue, 0, 4095, 0, 100);

  imu::Vector<3> accel = bno.getVector(Adafruit_BNO055::VECTOR_ACCELEROMETER);
  imu::Vector<3> euler = bno.getVector(Adafruit_BNO055::VECTOR_EULER);

  IMU1.Connected = 1;
  IMU1.Linear_x = accel.x();
  IMU1.Linear_y = accel.y();
  IMU1.Linear_z = accel.z();
  IMU1.Roll = euler.z();
  IMU1.Pitch = euler.y();
  IMU1.Yaw = euler.z();
  IMU1.d7 = 7.0;
  IMU1.d8 = 8.0;
  IMU1.d9 = 9.0;
  IMU1.d10 = 10.0;
  Serial.println(WiFi.macAddress());
  esp_now_send(slave.peer_addr, (uint8_t *)&IMU1, sizeof(IMU1));
  
  delay(5000);
}


