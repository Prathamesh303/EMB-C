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

#include "activity1.h"
#include "activity2.h"
#include "activity3.h"
#include "activity4.h"
#define ON 1
/**
 * @brief Main function where the code execution starts
 * 
 * @return int Return 0 if the program completes successfully
 * @note PORTB0 is in sink config. i.e when pin is Low, the LED will turn OFF
 * @note PORTB0 is in sink config. i.e when pin is High, the LED will turn ON
 */
int main(void)
{
	uint16_t Temperature, ADCchannel=0;
	char TempType;
	Init_Peripherals(); /*Initalize Port and pin for button and heat sensor*/
	init_ADC();/*Initalize ADC*/
	Init_PWM();/* Initialize Peripherals for PWM */
	Init_USART()/* Initialize Peripherals for UART */
	
	while(1){
		uint8_t Status;
		/* Turns LED ON if and only if both switches ButtonSensor and Heater are closed */
		Status=Status_Of_Led();
		if(Status==ON){
			Temperature=ReadADC(ADCchannel); /*reads sensor data from ADCChannel*/
    	    TempType=Generate_PWM(Temperature);/*Generates PWM according to data received from sensor*/
			USARTWriteString(TempType);/*Sends data to serial monitor*/
		}
	}
	return 0;
}