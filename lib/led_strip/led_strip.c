/*
 * SPDX-FileCopyrightText: 2021-2022 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Unlicense OR CC0-1.0
 */
#include <string.h>
#include "esp_log.h"
#include "led_strip_encoder.h"
#include "driver/rmt_tx.h"
#include "led_strip.h"

static const char *TAG = "example";
uint8_t led_strip_pixels[EXAMPLE_LED_NUMBERS * 3];
rmt_channel_handle_t led_chan = NULL;
rmt_encoder_handle_t led_encoder = NULL;
rmt_transmit_config_t tx_config = {
    .loop_count = 0, // no transfer loop
};

void led_strip_hsv2rgb(uint32_t h, uint32_t s, uint32_t v, uint32_t *r, uint32_t *g, uint32_t *b)
{
    h %= 360; // h -> [0,360]
    uint32_t rgb_max = v * 2.55f;
    uint32_t rgb_min = rgb_max * (100 - s) / 100.0f;

    uint32_t i = h / 60;
    uint32_t diff = h % 60;

    // RGB adjustment amount by hue
    uint32_t rgb_adj = (rgb_max - rgb_min) * diff / 60;

    switch (i)
    {
    case 0:
        *r = rgb_max;
        *g = rgb_min + rgb_adj;
        *b = rgb_min;
        break;
    case 1:
        *r = rgb_max - rgb_adj;
        *g = rgb_max;
        *b = rgb_min;
        break;
    case 2:
        *r = rgb_min;
        *g = rgb_max;
        *b = rgb_min + rgb_adj;
        break;
    case 3:
        *r = rgb_min;
        *g = rgb_max - rgb_adj;
        *b = rgb_max;
        break;
    case 4:
        *r = rgb_min + rgb_adj;
        *g = rgb_min;
        *b = rgb_max;
        break;
    default:
        *r = rgb_max;
        *g = rgb_min;
        *b = rgb_max - rgb_adj;
        break;
    }
}

void stripLedBegin()
{
    ESP_LOGI(TAG, "Create RMT TX channel");
    rmt_tx_channel_config_t tx_chan_config = {
        .clk_src = RMT_CLK_SRC_DEFAULT, // select source clock
        .gpio_num = LED_GPIO_NUM,
        .mem_block_symbols = 64, // increase the block size can make the LED less flickering
        .resolution_hz = RMT_LED_STRIP_RESOLUTION_HZ,
        .trans_queue_depth = 4, // set the number of transactions that can be pending in the background
    };
    ESP_ERROR_CHECK(rmt_new_tx_channel(&tx_chan_config, &led_chan));
    ESP_LOGI(TAG, "Install led strip encoder");
    led_strip_encoder_config_t encoder_config = {
        .resolution = RMT_LED_STRIP_RESOLUTION_HZ,
    };
    ESP_ERROR_CHECK(rmt_new_led_strip_encoder(&encoder_config, &led_encoder));
    ESP_LOGI(TAG, "Enable RMT TX channel");
    ESP_ERROR_CHECK(rmt_enable(led_chan));
    ESP_LOGI(TAG, "Start LED rainbow chase");
}

uint8_t setPixelColorRGB(int number, uint8_t Red, uint8_t Blue, uint8_t Green, int brightness)
{
    led_strip_pixels[number * 3 + 0] = Blue * brightness / 100;
    led_strip_pixels[number * 3 + 1] = Red * brightness / 100;
    led_strip_pixels[number * 3 + 2] = Green * brightness / 100;
    return rmt_transmit(led_chan, led_encoder, led_strip_pixels, sizeof(led_strip_pixels), &tx_config);
}

uint8_t setPixelColorHSV(int number, uint16_t color, uint32_t brightness)
{
    uint32_t red = 0;
    uint32_t green = 0;
    uint32_t blue = 0;
    led_strip_hsv2rgb(color, 100, brightness, &red, &green, &blue);
    led_strip_pixels[number * 3 + 2] = green;
    led_strip_pixels[number * 3 + 0] = blue;
    led_strip_pixels[number * 3 + 1] = red;
    return rmt_transmit(led_chan, led_encoder, led_strip_pixels, sizeof(led_strip_pixels), &tx_config);
}
