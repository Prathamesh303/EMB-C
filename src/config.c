#include "config.h"

void delay_ms(uint32_t delay_time)
{
	uint32_t i = 0;
	for (i = 0; i <= delay_time; i++)
	{
		_delay_ms(1);
	}
}