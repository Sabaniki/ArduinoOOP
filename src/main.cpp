#define DEBUG
#include <Arduino.h>
#include "AnalogPin.h"
#include "DigitalPin.h"
#include "ColorLED.h"
#include "ColorSensor.h"
#include "Motor.h"
#include "PhotoReflector.h"
#include "UltrasonicSensor.h"
void setup() {
}

void loop() {
	auto led = AnalogPin(13);
	while(true){
		for (int i = 0; i < 100; i++){
			led.write(i);
			delay(20);
		}
	}
}