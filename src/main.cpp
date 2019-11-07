#define DEBUG
#include <Arduino.h>
#include "AnalogPin.h"
#include "DigitalPin.h"
#include "ColorLED.h"
#include "ColorSensor.h"
#include "Motor.h"
#include "Motor.cpp"
#include "PhotoReflector.h"
#include "UltrasonicSensor.h"
void setup() {
}

void loop() {
	auto motorL = Motor(4, 5);
	auto motorR = Motor(3, 2);
	while (true){
		motorL.write(255);
		motorR.write(255);
		delay(1000);
		motorL.write(0);
		motorR.write(0);
		delay(1000);
		// motorL.write(-255);
		// delay(1000);
		// motorR.write(255);
		// delay(1000);
		// motorR.write(-255);
		// delay(1000);
	}
}