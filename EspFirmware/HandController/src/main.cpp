#include <Arduino.h>
#include <esp_now.h>
#include <WiFi.h>
#include <esp_wifi.h>



#define CHANNEL 1

esp_now_peer_info_t slave;


uint8_t data = 0;


void OnDataSent(const uint8_t *mac_addr, esp_now_send_status_t status){
  Serial.print("I sent my data --> ");
  Serial.println(data);
}





//Get mac address


void ScanForSlave(){
  int8_t scanResults = WiFi.scanNetworks();
  
  for (int i = 0; i < scanResults; ++i){
    String SSID = WiFi.SSID(i);
    String BSSIDstr = WiFi.BSSIDstr(i);
  
    if (SSID.indexOf("RX") == 0){
      int mac[6];
      if (6 == sscanf(BSSIDstr.c_str(), "%x:%x:%x:%x:%x:%x:", &mac[0],&mac[1],&mac[2],&mac[3],&mac[4],&mac[5])){
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



void setup() {
  // put your setup code here, to run once:

  
  Serial.begin(115200);

  WiFi.mode(WIFI_STA);
  esp_now_init();
  esp_now_register_send_cb(OnDataSent);
  ScanForSlave();
  esp_now_add_peer(&slave);

  
  
  
  
  
  
  
  
  
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
  esp_now_send(slave.peer_addr, &data, sizeof(data));
  data++;
  delay(3000);
}


