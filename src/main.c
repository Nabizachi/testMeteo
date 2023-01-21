#include "stdio.h"
#include "led_strip.h"

void app_main()
{
    stripLedBegin();
    for (int i = 1; i < 50; i++)
    {
        setPixelColorRGB(0, 255, 0, 0, i);
        vTaskDelay(pdMS_TO_TICKS(50));
        setPixelColorRGB(1, 255, 150, 0, i);
        vTaskDelay(pdMS_TO_TICKS(50));
        setPixelColorRGB(2, 255, 255, 0, i);
        vTaskDelay(pdMS_TO_TICKS(50));
        setPixelColorRGB(3, 150, 255, 0, i);
        vTaskDelay(pdMS_TO_TICKS(50));
        setPixelColorRGB(4, 0, 255, 0, i);
        vTaskDelay(pdMS_TO_TICKS(50));
        setPixelColorRGB(5, 0, 255, 150, i);
        vTaskDelay(pdMS_TO_TICKS(50));
        setPixelColorRGB(6, 0, 225, 255, i);
        vTaskDelay(pdMS_TO_TICKS(50));
        setPixelColorRGB(7, 0, 150, 255, i);
        vTaskDelay(pdMS_TO_TICKS(50));
        setPixelColorRGB(8, 0, 0, 255, i);
        vTaskDelay(pdMS_TO_TICKS(50));
        setPixelColorRGB(9, 150, 0, 255, i);
        vTaskDelay(pdMS_TO_TICKS(50));
        setPixelColorRGB(10, 255, 0, 255, i);
        vTaskDelay(pdMS_TO_TICKS(50));
        setPixelColorRGB(11, 255, 150, 255, i);
        vTaskDelay(pdMS_TO_TICKS(50));
        setPixelColorRGB(12, 255, 255, 255, i);
        vTaskDelay(pdMS_TO_TICKS(50));

        setPixelColorRGB(0, 255, 255, 255, i);
        vTaskDelay(pdMS_TO_TICKS(50));
        setPixelColorRGB(1, 255, 150, 255, i);
        vTaskDelay(pdMS_TO_TICKS(50));
        setPixelColorRGB(2, 255, 0, 255, i);
        vTaskDelay(pdMS_TO_TICKS(50));
        setPixelColorRGB(3, 150, 0, 255, i);
        vTaskDelay(pdMS_TO_TICKS(50));
        setPixelColorRGB(4, 0, 0, 255, i);
        vTaskDelay(pdMS_TO_TICKS(50));
        setPixelColorRGB(5, 0, 150, 255, i);
        vTaskDelay(pdMS_TO_TICKS(50));
        setPixelColorRGB(6, 0, 225, 255, i);
        vTaskDelay(pdMS_TO_TICKS(50));
        setPixelColorRGB(7, 0, 255, 150, i);
        vTaskDelay(pdMS_TO_TICKS(50));
        setPixelColorRGB(8, 0, 255, 0, i);
        vTaskDelay(pdMS_TO_TICKS(50));
        setPixelColorRGB(9, 150, 255, 0, i);
        vTaskDelay(pdMS_TO_TICKS(50));
        setPixelColorRGB(10, 255, 255, 0, i);
        vTaskDelay(pdMS_TO_TICKS(50));
        setPixelColorRGB(11, 255, 150, 0, i);
        vTaskDelay(pdMS_TO_TICKS(50));
        setPixelColorRGB(12, 255, 0, 0, i);
        vTaskDelay(pdMS_TO_TICKS(50));
    }
    for (int i = 50; i > 1; i -= 1)
    {
        setPixelColorRGB(0, 255, 0, 0, i);
        vTaskDelay(pdMS_TO_TICKS(50));
        setPixelColorRGB(1, 255, 150, 0, i);
        vTaskDelay(pdMS_TO_TICKS(50));
        setPixelColorRGB(2, 255, 255, 0, i);
        vTaskDelay(pdMS_TO_TICKS(50));
        setPixelColorRGB(3, 150, 255, 0, i);
        vTaskDelay(pdMS_TO_TICKS(50));
        setPixelColorRGB(4, 0, 255, 0, i);
        vTaskDelay(pdMS_TO_TICKS(50));
        setPixelColorRGB(5, 0, 255, 150, i);
        vTaskDelay(pdMS_TO_TICKS(50));
        setPixelColorRGB(6, 0, 225, 255, i);
        vTaskDelay(pdMS_TO_TICKS(50));
        setPixelColorRGB(7, 0, 150, 255, i);
        vTaskDelay(pdMS_TO_TICKS(50));
        setPixelColorRGB(8, 0, 0, 255, i);
        vTaskDelay(pdMS_TO_TICKS(50));
        setPixelColorRGB(9, 150, 0, 255, i);
        vTaskDelay(pdMS_TO_TICKS(50));
        setPixelColorRGB(10, 255, 0, 255, i);
        vTaskDelay(pdMS_TO_TICKS(50));
        setPixelColorRGB(11, 255, 150, 255, i);
        vTaskDelay(pdMS_TO_TICKS(50));
        setPixelColorRGB(12, 255, 255, 255, i);
        vTaskDelay(pdMS_TO_TICKS(50));

        setPixelColorRGB(0, 255, 255, 255, i);
        vTaskDelay(pdMS_TO_TICKS(50));
        setPixelColorRGB(1, 255, 150, 255, i);
        vTaskDelay(pdMS_TO_TICKS(50));
        setPixelColorRGB(2, 255, 0, 255, i);
        vTaskDelay(pdMS_TO_TICKS(50));
        setPixelColorRGB(3, 150, 0, 255, i);
        vTaskDelay(pdMS_TO_TICKS(50));
        setPixelColorRGB(4, 0, 0, 255, i);
        vTaskDelay(pdMS_TO_TICKS(50));
        setPixelColorRGB(5, 0, 150, 255, i);
        vTaskDelay(pdMS_TO_TICKS(50));
        setPixelColorRGB(6, 0, 225, 255, i);
        vTaskDelay(pdMS_TO_TICKS(50));
        setPixelColorRGB(7, 0, 255, 150, i);
        vTaskDelay(pdMS_TO_TICKS(50));
        setPixelColorRGB(8, 0, 255, 0, i);
        vTaskDelay(pdMS_TO_TICKS(50));
        setPixelColorRGB(9, 150, 255, 0, i);
        vTaskDelay(pdMS_TO_TICKS(50));
        setPixelColorRGB(10, 255, 255, 0, i);
        vTaskDelay(pdMS_TO_TICKS(50));
        setPixelColorRGB(11, 255, 150, 0, i);
        vTaskDelay(pdMS_TO_TICKS(50));
        setPixelColorRGB(12, 255, 0, 0, i);
        vTaskDelay(pdMS_TO_TICKS(50));
    }
    /*for (;;)
    {
        for (int i = 1; i < 50; i++)
        {
            setPixelColorRGB(0, 255, 0, 0, i);
            setPixelColorRGB(1, 255, 150, 0, i);
            setPixelColorRGB(2, 255, 255, 0, i);
            setPixelColorRGB(3, 150, 255, 0, i);
            setPixelColorRGB(4, 0, 255, 0, i);
            setPixelColorRGB(5, 0, 255, 150, i);
            setPixelColorRGB(6, 0, 225, 255, i);
            setPixelColorRGB(7, 0, 150, 255, i);
            setPixelColorRGB(8, 0, 0, 255, i);
            setPixelColorRGB(9, 150, 0, 255, i);
            setPixelColorRGB(10, 255, 0, 255, i);
            setPixelColorRGB(11, 255, 150, 255, i);
            setPixelColorRGB(12, 255, 255, 255, i);
            vTaskDelay(pdMS_TO_TICKS(50));
        }
        for (int i = 50; i > 1; i -= 1)
        {
            setPixelColorRGB(0, 255, 0, 0, i);
            setPixelColorRGB(1, 255, 150, 0, i);
            setPixelColorRGB(2, 255, 255, 0, i);
            setPixelColorRGB(3, 150, 255, 0, i);
            setPixelColorRGB(4, 0, 255, 0, i);
            setPixelColorRGB(5, 0, 255, 150, i);
            setPixelColorRGB(6, 0, 225, 255, i);
            setPixelColorRGB(7, 0, 150, 255, i);
            setPixelColorRGB(8, 0, 0, 255, i);
            setPixelColorRGB(9, 150, 0, 255, i);
            setPixelColorRGB(10, 255, 0, 255, i);
            setPixelColorRGB(11, 255, 150, 255, i);
            setPixelColorRGB(12, 255, 255, 255, i);
            vTaskDelay(pdMS_TO_TICKS(50));
        }
    }*/
    // memset(led_strip_pixels, 0, sizeof(led_strip_pixels));
    // vTaskDelay(pdMS_TO_TICKS(EXAMPLE_CHASE_SPEED_MS));
}