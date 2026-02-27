#include <Arduino.h>
#include <esp_now.h>
#include <WiFi.h>



#define CHANNEL 1

uint8_t sender1Mac[6] = {0xB8, 0xF8, 0x62, 0xF6, 0xE7, 0x5C};
uint8_t sender2Mac[6] = {0x8C, 0xBF, 0xEA, 0x8E, 0xF0, 0xD0};
bool s1Ready = false;
bool s2Ready = false;


struct IMUdata {
  int Connected;
  float d1;
  float d2;
  float d3;
  float d4;
  float d5;
  float d6;
  float d7;
  float d8;
  float d9;
  float d10;

  
};
struct IMUdata armData; 
struct IMUdata handData;


// put function declarations here:
void OnDataRecv(const uint8_t *mac_addr, const uint8_t *data, int data_len){
  

  if (memcmp(mac_addr, sender1Mac, 6) == 0) {
    memcpy(&armData, data, sizeof(IMUdata));
    s1Ready = true;
  } else if (memcmp(mac_addr, sender2Mac, 6) == 0) {
    memcpy(&handData, data, sizeof(IMUdata));
    s2Ready = true;
  }

 // Serial.println(*data);


  //memcpy(&armData,data,sizeof(armData));

  //maybe make if statement to wait untill all data comes before printing
   if (s1Ready && s2Ready) {
    Serial.print("I just recieved --> ");
    Serial.printf("@%d,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,"
                  "@%d,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f\n",
      armData.Connected,
      armData.d1, armData.d2, armData.d3, armData.d4, armData.d5,
      armData.d6, armData.d7, armData.d8, armData.d9, armData.d10,
      handData.Connected,
      handData.d1, handData.d2, handData.d3, handData.d4, handData.d5,
      handData.d6, handData.d7, handData.d8, handData.d9, handData.d10);
    s1Ready = false;
    s2Ready = false;
  }
}
  
 // for (int i = 0; i < 10; i++){
 //   serial.println(armData[i]);
 // }
/*

Info to print out
  Serial.printf(
    "@%.2f %.2f %d %d %d %d %.7f %.7f %.2f %.2f\n", 
    leftAngvel_tmp, 
    rightAngvel_tmp, 
    0, // imu heading, removed
    dataToSend.openLoop, 
    boardBConnected_tmp, 
    0, 
    0, 
    0, 
    0, 
    0
    
  );
  */

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  WiFi.mode(WIFI_AP);
  WiFi.softAP("RX_1",NULL, CHANNEL, 0);

  Serial.print("AP MAC: ");
  Serial.println(WiFi.softAPmacAddress());
  
  esp_now_init();
  esp_now_register_recv_cb(OnDataRecv);
}

void loop() {
  // put your main code here, to run repeatedly:
 // Serial.print("I did this to data -> ");
 // Serial.println(armData * 5);
 // delay(3000);
}

// put function definitions here:
