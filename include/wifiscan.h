#ifndef _WIFISCAN_H
#define _WIFISCAN_H

// ESP32 Functions
#include <esp_wifi.h>

// Hash function for scrambling MAC addresses
#include "hash.h"

void wifi_sniffer_init(void);
void switch_wifi_sniffer (uint8_t state);
static void IRAM_ATTR wifi_sniffer_packet_handler(void *buff, wifi_promiscuous_pkt_type_t type);
void switchWifiChannel(TimerHandle_t xTimer);

#endif