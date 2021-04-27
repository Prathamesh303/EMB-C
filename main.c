/**
 * @file main.c
 * @author Prathamesh Dalvi
 * @brief 
 * @version 0.1
 * @date 2021-04-26
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "config.h"
#include "blink.h"

/**
 * @brief Initialize all the Peripherals and pin configurations
 * 
 */
void init(void)
{
	/* Configure LED Pin */
	DDRB |= (1<<PB1);//Makes first pin of PORTB as Output
    DDRC = 0x00; //Makes all pins of PORTD input
	PORTC |= (1<<PC1);
	PORTC |= (1<<PC0);
}

void change_led_state(uint8_t state)
{
	LED_PORT = (state << LED_PIN);
}


/**
 * @brief Main function where the code execution starts
 * 
 * @return int Return 0 if the program completes successfully
 * @note PORTB1 is in sink config. i.e when pin is Low, the LED will turn OFF
 * @note PORTB1 is in sink config. i.e when pin is High, the LED will turn ON
 */
int main(void)
{
	/* Initialize Peripherals */
	init();
	/* Activity1 */
	activity1();
	return 0;
}