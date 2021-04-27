#ifndef __CONFIG_H__
#define __CONFIG_H__
/**
 * @file config.h
 * @author Prathamesh Dalvi
 * @brief Configuration file to define pins and ports for the interfaced peripherals and functions
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <util/delay.h>

/**
 * @brief Function to generate delay in micro seconds
 * 
 * @param[in] delay_time Delay in Micro seconds
 * 
 */
void delay_ms(uint32_t delay_time);

/**
 * @brief Function to change LED status according to the user requirement in activity1
 * 
 */
void activity1(void);

/**
 * @brief Function to initialize ADC
 * 
 */
void InitADC();

/**
 * @brief Function to read values from a channel 
 * @param[in] channel channel number
 */
uint16_t ReadADC(uint8_t channel);
/**
 * Macro Definitions
 */

#define F_CPU 16000000UL 	/**< Clock Frequency of MCU is 16 MHz */

#define LED_PORT (PORTB)    /**< LED Port Number */
#define LED_PIN  (PORTB0)   /**< LED Pin number  */




#endif /* __CONFIG_H__ */
