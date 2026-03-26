#include <Arduino.h>
#include <esp_now.h>
#include <WiFi.h>
#include <esp_wifi.h>
#include <Wire.h>
#include <Adafruit_BNO055.h>


#define CHANNEL 1

Adafruit_BNO055 bno = Adafruit_BNO055(55, 0x28);
Adafruit_BNO055 bno2 = Adafruit_BNO055(55, 0x29);
uint8_t receiverMac[6] = {0xC8, 0xF0, 0x9E, 0x50, 0x75, 0x3D};
esp_now_peer_info_t slave;




//micro ros wifi connection
IPAddress agent_ip(192, 168, 1, 113); //this is the pi's Ip address
size_t agent_port = 8888;

char ssid[] = "WIFI_SSID";
char psk[]= "WIFI_PSK";

set_microros_wifi_transports(ssid, psk, agent_ip, agent_port);

//slave.channel = CHANNEL;

struct ImuArmData {
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

ImuArmData IMU1;
ImuArmData IMU2;



void readIMU(Adafruit_BNO055 &sensor, ImuArmData &data) {
  imu::Vector<3> accel = sensor.getVector(Adafruit_BNO055::VECTOR_ACCELEROMETER);
  imu::Vector<3> euler = sensor.getVector(Adafruit_BNO055::VECTOR_EULER);

  data.Connected = 1;
  data.Linear_x  = accel.x();
  data.Linear_y  = accel.y();
  data.Linear_z  = accel.z();
  data.Yaw       = euler.x();  // BNO055 euler: x=Yaw, y=Pitch, z=Roll
  data.Pitch     = euler.y();
  data.Roll      = euler.z();
  data.d7  = 7.0;
  data.d8  = 8.0;
  data.d9  = 9.0;
  data.d10 = 10.0;
}

//void OnDataSent(const uint8_t *mac_addr, esp_now_send_status_t status){
 // Serial.print("I sent my data to--> ");

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
  Wire.begin(8, 9);
  WiFi.mode(WIFI_STA);
  esp_now_init();
  esp_now_register_send_cb(OnDataSent);
 // ScanForSlave();
  memset(&slave, 0, sizeof(slave));
  memcpy(slave.peer_addr, receiverMac, 6);
  slave.channel = CHANNEL;
  slave.encrypt = 0;        
  //Serial.println(WiFi.macAddress());

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
  
  readIMU(bno,  packet.IMU1);
  readIMU(bno2, packet.IMU2);



  
  esp_now_send(slave.peer_addr, (uint8_t *)&packet, sizeof(packet));
  
  delay(5000);
}


