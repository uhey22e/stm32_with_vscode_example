#ifndef __led_H
#define __led_H

#include "stm32l0xx_hal.h"

class led
{
private:
    GPIO_TypeDef *port;
    uint16_t pin;

public:
    led(GPIO_TypeDef *_port, uint16_t _pin);

    void turnOn(void);
    void turnOff(void);
};

extern "C" void led_c_wrapper_example(void);

#endif