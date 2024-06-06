#include <stdio.h>
#include "driver/gpio.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
void app_main(void)
{
    // initialize gpio 22 as input with an internal pullup
    gpio_set_direction(GPIO_NUM_22, GPIO_MODE_INPUT);
    gpio_set_pull_mode(GPIO_NUM_22, GPIO_PULLUP_ONLY);
    //initialize gpio 26 as output
    gpio_set_direction(GPIO_NUM_26, GPIO_MODE_OUTPUT);
    //the infinite loop
    while (true)
    {
        /* code */
        if(1 == gpio_get_level(GPIO_NUM_22))
        {
           gpio_set_level(GPIO_NUM_26, 1);
        }
        else
        {
            gpio_set_level(GPIO_NUM_26, 0);
        }
        vTaskDelay(10);
    }
    
}
