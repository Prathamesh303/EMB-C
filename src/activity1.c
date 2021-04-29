#include "activity1.h"

void delay_milli_second(uint32_t delay_time)
{
	uint32_t i = 0;
	for (i = 0; i <= delay_time; i++)
	{
		_delay_ms(1);
	}
}

void Change_LED_state(uint8_t state)
{
	LED_PORT = (state << LED_PIN);
}

void Init_Peripherals(void)
{
	/* Configure LED Pin */
	SET_PORTB0_AS_OUTPUT;//Makes first pin of PORTB as Output
    SET_PORTD_AS_INPUT; //Makes all pins of PORTD input
	PORTD |= (1<<PORTD1)|(1<<PORTD0); //Pull Up 
    PORTD |= (1<<PORTD0);
    PORTD |= (1<<PORTD1);
}

uint8_t Status_Of_Led(void)
{   
    uint8_t FLAG=0;
    Init_Peripherals();/* Initialize Peripherals */
    Change_LED_state(LED_OFF);
    /*checks whether button sensor is ON or OFF */
    if(BUTTON_SENSOR_ON){
        /*checks whether heater button is ON or OFF */
        if(HEATER_SENSOR_ON){
            Change_LED_state(LED_ON);
            FLAG=1;
        }
        else{
            Change_LED_state(LED_OFF);
            FLAG=0;
        }
    }
    else {
        Change_LED_state(LED_OFF);
        FLAG=0;
    }
    return FLAG;
}