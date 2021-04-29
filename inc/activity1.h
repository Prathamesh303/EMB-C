#ifndef _ACTIVITY1_H_
#define _ACTIVITY1_H_
/**
 * @file activity.h
 * @author Prathamesh Dalvi
 * @brief Project to Blink an LED connected to AVR328 MCU GPIO Pin
 * @version 0.1
 * @date 2021-04-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */


/**
 * Include files
 */ 
#define F_CPU 16000000UL 	/**< Clock Frequency of MCU is 16 MHz */
#include <avr/io.h>
#include <util/delay.h>

/**
 * Macro Definitions
 */


#define LED_ON 	(0x01)			/**< LED state HIGH */
#define LED_OFF	(0x00)			/**< LED state LOW */
#define LED_PORT (PORTB)    /**< LED Port Number */
#define LED_PIN  (PORTB0)   /**< LED Pin number  */
#define BUTTON_SENSOR_ON 	!(PIND & 1<<PD0)	/**< BUTTON_SENSOR state HIGH */
#define HEATER_SENSOR_ON	!(PIND & 1<<PD1)	/**< HEATER_SENSOR state HIGH */
#define SET_PORTB0_AS_OUTPUT  DDRB |= (1<<PORTB0)
#define SET_PORTD_AS_INPUT  DDRD = 0x00
/**
 * @brief Function to change status of LED
 * 
 * @param[in] state ON or OFF
 * 
 */
void Change_LED_state(uint8_t state)

/**
 * @brief Function to generate delay in micro seconds
 * 
 * @param[in] delay_time Delay in Micro seconds
 * 
 */
void delay_milli_second(uint32_t delay_time);

/**
 * @brief Function to change LED status according to the user requirement in activity1
 * 
 * @return FLAG
 */
uint8_t Status_Of_Led(void);

/**
 * @brief Function to initialize peripherals of microcontroller
 * 
 */

void Init_Peripherals(void);

#endif /* _ACTIVITY1_H_ */

