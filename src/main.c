#include "led_strip.h"

void startLed()
{
    stripLedBegin();
}

void app_main()
{

    setPixelColorHSV(0, 240, 1);
    setPixelColorHSV(1, 60, 1);
    setPixelColorHSV(2, 120, 1);
    setPixelColorHSV(3, 200, 1);
    setPixelColorHSV(4, 180, 1);
    setPixelColorRGB(5, 255, 255, 255, 1);
    setPixelColorRGB(6, 255, 100, 0, 1);
    setPixelColorRGB(7, 255, 0, 0, 1);
    setPixelColorRGB(8, 0, 255, 0, 1);
    setPixelColorRGB(9, 0, 0, 255, 1);

    vTaskDelay(pdMS_TO_TICKS(EXAMPLE_CHASE_SPEED_MS));
    // memset(led_strip_pixels, 0, sizeof(led_strip_pixels));
    // vTaskDelay(pdMS_TO_TICKS(EXAMPLE_CHASE_SPEED_MS));
}