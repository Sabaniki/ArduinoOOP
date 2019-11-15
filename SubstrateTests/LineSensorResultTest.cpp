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
#include "KuromikaLine.h"
#include "KuromikaLine.cpp"
void setup() {
	Serial.begin(9600);
}

void loop() {
	int threshold = 750;
	KuromikaLine lineSensors[5] = {
		KuromikaLine(8, A2, threshold),
		KuromikaLine(8, A4, threshold),
		KuromikaLine(8, A5, threshold),
		KuromikaLine(8, A6, threshold),
		KuromikaLine(8, A7, threshold),
	};
	
	while (true){
		for (size_t i = 0; i < 4; i++) {
			Serial.print(lineSensors[i].read());
			Serial.print(",");
		}
		Serial.print(lineSensors[4].read());
		Serial.println("");
		delay(100);
	}
}