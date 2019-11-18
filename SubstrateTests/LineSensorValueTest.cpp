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
#define LINE_SENSOR_PIN_1 A3
#define LINE_SENSOR_PIN_2 A5
#define LINE_SENSOR_PIN_3 A1
#define LINE_SENSOR_PIN_4 A7
#define LINE_SENSOR_PIN_5 A9

void setup() {
	Serial.begin(9600);
}

void loop() {
	AnalogPin pins[5] = {
		AnalogPin(LINE_SENSOR_PIN_1),
		AnalogPin(LINE_SENSOR_PIN_2),
		AnalogPin(LINE_SENSOR_PIN_3),
		AnalogPin(LINE_SENSOR_PIN_4),
		AnalogPin(LINE_SENSOR_PIN_5),
	};

	auto  greenLED = DigitalPin(15, OUTPUT);
	auto  redLED = DigitalPin(9, OUTPUT);
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