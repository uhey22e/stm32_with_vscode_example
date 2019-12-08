#include "led.h"

#include <stdio.h>
#include "main.h"
#include "FreeRTOS.h"
#include "task.h"

led::led(GPIO_TypeDef *_port, uint16_t _pin) : port(_port), pin(_pin)
{
}

void led::turnOn(void)
{
    HAL_GPIO_WritePin(this->port, this->pin, GPIO_PIN_SET);
}

void led::turnOff(void)
{
    HAL_GPIO_WritePin(this->port, this->pin, GPIO_PIN_RESET);
}

void led_c_wrapper_example(void)
{
    led ld2(LD2_GPIO_Port, LD2_Pin);

    for (;;)
    {
        printf("Toggle LED\n");
        ld2.turnOn();
        vTaskDelay(pdMS_TO_TICKS(500));
        ld2.turnOff();
        vTaskDelay(pdMS_TO_TICKS(500));
    }
}
