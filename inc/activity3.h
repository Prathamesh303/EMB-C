#ifndef _ACTIVITY3_H_
#define _ACTIVITY3_H_

/**
 * @file activity3.h
 * @author Prathamesh Dalvi
 * @brief Activity3 in the embedded case study
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */


/**
 * @brief Function to initialize PWM    
 * 
 */
void Init_PWM(void);

/**
 * @brief Function to Generate PWM    
 * 
 * @param[in] Temperature input temperature obtained from ADC 
 * @return TempToCAN
 */
char Generate_PWM(uint16_t);
#endif  /* _ACTIVITY3_H_ */