## Embedded C Programming Activity1, Activity2, Activity3 and Activity4 with Continuous Integration and Code Quality

#ON
![on](https://user-images.githubusercontent.com/80693368/116717017-0a9c5a80-a9f6-11eb-9fbe-fe94850be8a0.jpg)

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
