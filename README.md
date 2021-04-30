# EMB-C

[![Compile-Linux](https://github.com/Prathamesh303/EMB-C/actions/workflows/linux.yml/badge.svg)](https://github.com/Prathamesh303/EMB-C/actions/workflows/linux.yml)

[![Cppcheck](https://github.com/Prathamesh303/EMB-C/actions/workflows/cppcheck.yml/badge.svg)](https://github.com/Prathamesh303/EMB-C/actions/workflows/cppcheck.yml)


## Code 
```
while(1){
	uint8_t Status;
	/* Turns LED ON if and only if both switches ButtonSensor and Heater are closed */
	Status=StatusOfLedActuator();
	if(Status==ON){
		Temperature=ReadADC(ADCchannel); /*reads sensor data from ADCChannel*/
		TempType=GeneratePWM(Temperature);/*Generates PWM according to data received from sensor*/
		USARTWriteString(TempType);/*Sends data to serial monitor*/
	}
}
