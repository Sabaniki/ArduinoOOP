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
    const int greenPin = -1;
    const int threshold = -1;
	KuromikaLine lineSensors[5] = {
		KuromikaLine(greenPin, A2, threshold),
		KuromikaLine(greenPin, A3, threshold),
		KuromikaLine(greenPin, A4, threshold),
		KuromikaLine(greenPin, A5, threshold),
		KuromikaLine(greenPin, A6, threshold),
	};
	delay(1000);

	while (true){
		for (size_t i = 0; i < 4; i++) {
			Serial.print(lineSensors[i].read());
			Serial.print(", ");
		}
		Serial.print(lineSensors[0].read());
		Serial.println("");
		delay(100);
	}
}