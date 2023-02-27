/* Hello World Example

   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/
#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "esp_spi_flash.h"

#include "driver/gpio.h"

#include "portmacro.h"
#include "FreeRTOSConfig.h"
#include "../build/include/sdkconfig.h"

#define LED_GPIO 2

void app_main()
{
    gpio_set_direction(LED_GPIO, GPIO_MODE_OUTPUT);
}
