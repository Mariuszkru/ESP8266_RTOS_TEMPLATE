#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "esp_spi_flash.h"

#include "driver/gpio.h"
#include "driver/uart.h"

#include "portmacro.h"
#include "FreeRTOSConfig.h"
#include "../build/include/sdkconfig.h"

#define LED_GPIO 2

void app_main()
{
    uart_set_baudrate(0,115200);

    gpio_set_direction(LED_GPIO, GPIO_MODE_OUTPUT);

    while (1) {
        gpio_set_level(LED_GPIO, 1);
        vTaskDelay(1000 / portTICK_RATE_MS);
        gpio_set_level(LED_GPIO, 0);
        vTaskDelay(1000 / portTICK_RATE_MS);
    }
}

