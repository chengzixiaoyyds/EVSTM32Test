#ifndef READPIN_H_
#define READPIN_H_

#include "main.h"
#include "gpio.h"

uint8_t ReadPin(uint8_t * command , GPIO_TypeDef * GPIOx, uint16_t GPIO_Pin);

#endif