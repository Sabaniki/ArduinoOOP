#define DEBUG
#include <Arduino.h>
#include "AnalogPin.h"
#include "DigitalPin.h"
#include "DigitalPin.cpp"
#include "ColorLED.h"
#include "ColorSensor.h"
#include "Motor.h"
#include "Motor.cpp"
#include "PhotoReflector.h"
#include "UltrasonicSensor.h"
#include "RotaryEncoder.h"
#include "RotaryEncoder.cpp"
void setup() {
	Serial.begin(9600);
}

void loop() {
	AnalogPin pins[5] = {
		AnalogPin(A2),
		AnalogPin(A3),
		AnalogPin(A4),
		AnalogPin(A5),
		AnalogPin(A6),
	};

	auto  greenLED = DigitalPin(1, OUTPUT);
	auto  redLED = DigitalPin(2, OUTPUT);
	greenLED.write(true);
	delay(1000);
	
	while (true){
		for (size_t i = 0; i < 4; i++) {
			Serial.print(pins[i].read());
			Serial.print(",");
		}
		Serial.print(pins[4].read());
		Serial.println("");
		delay(100);
	}
}