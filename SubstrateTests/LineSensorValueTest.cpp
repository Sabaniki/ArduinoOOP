#define DEBUG
#include <Arduino.h>
#include "DigitalPin/DigitalPin.h"
#include "AnalogPin/AnalogPin.h"

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