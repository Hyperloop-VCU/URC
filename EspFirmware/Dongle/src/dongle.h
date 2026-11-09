#ifndef DONGLE_H
#define DONGLE_H


#define ESPNOW_WIFI_MODE WIFI_MODE_STA
#define ESPNOW_WIFI_IF   WIFI_IF_STA
#define ESPNOW_QUEUE_SIZE 6
#define CONFIG_ESPNOW_CHANNEL 1

#include "urc_msgs.h"




typedef struct {
    uint8_t mac_addr[ESP_NOW_ETH_ALEN];
    uint8_t data[sizeof(ArmMsg)];
    int data_len;
}   espnow_recv_event_t;

#endif