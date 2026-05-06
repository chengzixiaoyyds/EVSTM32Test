#include "ReadPin.h"
#define COMMAND_LENGH 4

uint8_t ReadPin(uint8_t * command , GPIO_TypeDef * GPIOx, uint16_t GPIO_Pin)
{
	uint8_t state = HAL_GPIO_ReadPin(GPIOx, GPIO_Pin);
	command[0] = 0x5a;
	command[1] = 0xa5;
	command[2] = state;
	uint8_t sum = 0;
	for(uint8_t i = 0; i < COMMAND_LENGH - 1; i++)
	{
		sum += command[i];
	}
	command[COMMAND_LENGH - 1] = sum;
	return COMMAND_LENGH;
}