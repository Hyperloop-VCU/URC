#include "esp_log.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/queue.h"
#include "esp_now.h"
#include "esp_wifi.h"
#include "esp_event.h"
#include "nvs_flash.h"
#include "tinyusb.h"
#include "tinyusb_net.h"
#include "esp_netif.h"
#include "dongle.h"
#include "esp_mac.h"
#include <string.h>

static const char *TAG = "dongle";
static QueueHandle_t s_recv_queue = NULL;

static void wifi_init(void);
static esp_err_t espnow_init(void);
static void espnow_recv_task(void *arg);
static void espnow_recv_cb(const esp_now_recv_info_t *recv_info, const uint8_t *data, int len);
static esp_err_t tiny_setup(void);
static esp_err_t usb_net_recv_cb(void *buffer, uint16_t len, void *ctx);




//ESP NOW SIDE
static void wifi_init(void)
{
    ESP_ERROR_CHECK(esp_netif_init());
    ESP_ERROR_CHECK(esp_event_loop_create_default());
    wifi_init_config_t cfg = WIFI_INIT_CONFIG_DEFAULT();
    ESP_ERROR_CHECK( esp_wifi_init(&cfg) );
    ESP_ERROR_CHECK( esp_wifi_set_storage(WIFI_STORAGE_RAM) );
    ESP_ERROR_CHECK( esp_wifi_set_mode(ESPNOW_WIFI_MODE) );
    ESP_ERROR_CHECK( esp_wifi_start());
    ESP_ERROR_CHECK( esp_wifi_set_channel(CONFIG_ESPNOW_CHANNEL, WIFI_SECOND_CHAN_NONE));
}


static esp_err_t espnow_init(void)
{
    s_recv_queue = xQueueCreate(ESPNOW_QUEUE_SIZE, sizeof(espnow_recv_event_t));
    if(s_recv_queue == NULL){return ESP_FAIL;};
    ESP_ERROR_CHECK( esp_now_init() );
    ESP_ERROR_CHECK( esp_now_register_recv_cb(espnow_recv_cb) );
    xTaskCreate(espnow_recv_task, "espnow_recv_task", 4096, NULL, 4, NULL);
    return ESP_OK;
}


static void espnow_recv_task(void *arg){
    espnow_recv_event_t evt;
    for (;;){
        if(xQueueReceive(s_recv_queue, &evt, portMAX_DELAY) == pdTRUE){
            ESP_LOGI(TAG, "from " MACSTR " len %d", MAC2STR(evt.mac_addr),evt.data_len);


            if (evt.data_len < (int)sizeof(MsgHeader)) {
                ESP_LOGW(TAG, "packet too short: %d bytes", evt.data_len);
                continue;
            }

            MsgHeader hdr;
            memcpy(&hdr, evt.data, sizeof(hdr));

            switch (hdr.type) {
                case MSG_ARM: {
                    if (evt.data_len != (int)sizeof(ArmMsg)) {
                        ESP_LOGW(TAG, "arm msg wrong size: %d, expected %d",
                                 evt.data_len, (int)sizeof(ArmMsg));
                        break;
                    }
                    ArmMsg msg;
                    memcpy(&msg, evt.data, sizeof(msg));
                    ESP_LOGI(TAG, "ARM  seq %u  upper r/p/y %.2f %.2f %.2f  fore r/p/y %.2f %.2f %.2f",
                             msg.header.seq,
                             msg.upperArm.roll, msg.upperArm.pitch, msg.upperArm.yaw,
                             msg.foreArm.roll,  msg.foreArm.pitch,  msg.foreArm.yaw);
                    break;
                }

                case MSG_HAND: {
                    if (evt.data_len != (int)sizeof(HandMsg)) {
                        ESP_LOGW(TAG, "hand msg wrong size: %d, expected %d",
                                 evt.data_len, (int)sizeof(HandMsg));
                        break;
                    }
                    HandMsg msg;
                    memcpy(&msg, evt.data, sizeof(msg));
                    ESP_LOGI(TAG, "HAND seq %u  r/p/y %.2f %.2f %.2f",
                             msg.header.seq,
                             msg.imu.roll, msg.imu.pitch, msg.imu.yaw);
                    break;
                }

                default:
                    ESP_LOGW(TAG, "unknown msg type %u from " MACSTR,
                             hdr.type, MAC2STR(evt.mac_addr));
                    break;
            }
        }
    }
}

static void espnow_recv_cb(const esp_now_recv_info_t *recv_info, const uint8_t *data, int len)
{
    espnow_recv_event_t evt;
    uint8_t * mac_addr = recv_info->src_addr;
    if (mac_addr == NULL || data == NULL || len <= 0) {
        ESP_LOGE(TAG, "Receive cb arg error");
        return;
    }
    if( len > (int)sizeof(evt.data)){
        ESP_LOGE(TAG, "Oversized Packet");
        return;
    }

    memcpy(evt.mac_addr, recv_info->src_addr,ESP_NOW_ETH_ALEN);
    evt.data_len = len;
    memcpy(evt.data, data, len);

    if (xQueueSend(s_recv_queue, &evt, 0) != pdTRUE){

    }
    
}


//TINY USB
static esp_err_t tiny_setup(void){
    tinyusb_net_config_t net_cfg = {};
    const tinyusb_config_t tusb_cfg = {};
    ESP_ERROR_CHECK(esp_read_mac(net_cfg.mac_addr, ESP_MAC_ETH));
    net_cfg.on_recv_callback = usb_net_recv_cb;



    ESP_ERROR_CHECK(tinyusb_driver_install(&tusb_cfg));
    ESP_ERROR_CHECK(tinyusb_net_init(TINYUSB_USBDEV_0, &net_cfg));

    return ESP_OK;
}


static esp_err_t usb_net_recv_cb(void *buffer, uint16_t len, void *ctx){
    ESP_LOGI(TAG, "USB rx %u bytes", len);
    return ESP_OK;


    /*
    
    if (s_usb_netif == NULL) {
        return ESP_OK;                    // netif not created yet - drop the frame
    }

    void *copy = malloc(len);
    if (copy == NULL) {
        return ESP_ERR_NO_MEM;            // out of memory - drop the frame
    }
    memcpy(copy, buffer, len);

    return esp_netif_receive(s_usb_netif, copy, len, NULL);*/
}

//RTPS


//DHCP

//Main
extern "C" void app_main(void) {
    ESP_LOGI(TAG, "Dongle starting");
    esp_err_t ret = nvs_flash_init(); 
    if (ret == ESP_ERR_NVS_NO_FREE_PAGES || ret == ESP_ERR_NVS_NEW_VERSION_FOUND) {
        ESP_ERROR_CHECK( nvs_flash_erase() );
        ret = nvs_flash_init();
    }

    ESP_ERROR_CHECK( ret );
    uint8_t mac[6];
    wifi_init();
    ESP_ERROR_CHECK(esp_wifi_get_mac(WIFI_IF_STA,mac));
    ESP_LOGI(TAG, "Dongle MAC: " MACSTR, MAC2STR(mac));
    ESP_ERROR_CHECK(espnow_init());
    ESP_ERROR_CHECK(tiny_setup());
}
