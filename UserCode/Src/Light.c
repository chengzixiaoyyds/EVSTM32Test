#include "Light.h"

void Light_Init(void)
{
	HAL_TIM_PWM_Start(&htim2, TIM_CHANNEL_1);
}

void Light_Set(uint8_t light)
{
	if(light > 100)
	{
		light = 100;
	}
	if(light < 0)
	{
		light = 0;
	}
	__HAL_TIM_SET_COMPARE(&htim2, TIM_CHANNEL_1, light);
}