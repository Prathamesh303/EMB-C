#include "activity1.h"
#include "activity3.h"

#define WRITE_PWM OCR1A


void Init_PWM(void){
    TCCR1A=(1<<COM1A1)|(1<<WGM11)|(1<<WGM10);
    TCCR1B=(1<<CS11)|(1<<WGM12)|(1<<CS10);
    DDRB|=(1<<PB1);
}

char Generate_PWM(uint16_t Temperature){
    
    if(Temperature<=200){
        WRITE_PWM=1024*20.0/100 ;//PWM of Duty cycle 20%
        delay_milli_second(200);
        return 'a';
    }
    else if(Temperature>200 && Temperature<=500){
        WRITE_PWM=1024*40.0/100;//PWM of Duty cycle 40%
        delay_milli_second(200);
        return 'b';
    }
    else if(Temperature>500 && Temperature<=700){
        WRITE_PWM=1024*70.0/100;//PWM of Duty cycle 70%
        delay_milli_second(200);
        return 'c';
    }
    else{
        WRITE_PWM=1024*95/100;//PWM of Duty cycle 95%
        delay_milli_second(200);
        return 'd';
    }
}