#include <Arduino.h>
#include <esp_now.h>
#include <WiFi.h>



#define CHANNEL 1
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
struct IMUdata newData; 

// put function declarations here:
void OnDataRecv(const uint8_t *macc_addr, const uint8_t *data, int data_len){
  Serial.print("I just recieved --> ");
 // Serial.println(*data);




  memcpy(&newData,data,sizeof(newData));
  Serial.printf("@%d,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f\n",newData.Connected,newData.d1,newData.d2,newData.d3,newData.d4,newData.d5,newData.d6,newData.d7,newData.d8,newData.d9,newData.d10);
  
 // for (int i = 0; i < 10; i++){
 //   serial.println(newData[i]);
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
}
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
 // Serial.println(newData * 5);
 // delay(3000);
}

// put function definitions here:
