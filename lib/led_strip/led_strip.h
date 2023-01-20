#ifndef __LED_STRIP_H__
#define __LED_STRIP_H__

#include "led_strip_encoder.h"
#include "driver/rmt_tx.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#define RMT_LED_STRIP_RESOLUTION_HZ 10000000 // 10MHz resolution, 1 tick = 0.1us (led strip needs a high resolution)

#define EXAMPLE_LED_NUMBERS 14
#define EXAMPLE_CHASE_SPEED_MS 5000
#define LED_GPIO_NUM 26

void led_strip_hsv2rgb(uint32_t h, uint32_t s, uint32_t v, uint32_t *r, uint32_t *g, uint32_t *b);
void stripLedBegin();
uint8_t setPixelColorRGB(int number, uint8_t Red, uint8_t Blue, uint8_t Green, int brightness);
uint8_t setPixelColorHSV(int number, uint16_t color, uint32_t brightness);

#endif