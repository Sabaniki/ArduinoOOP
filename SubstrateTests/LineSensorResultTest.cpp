#define DEBUG
#include <Arduino.h>

#include "PhotoReflector/PhotoReflector.h"

void setup() {
	Serial.begin(9600);
}

void loop() {
	PhotoReflector lineSensors[5] = {
		PhotoReflector(A7),
		PhotoReflector(A6),
		PhotoReflector(A5),
		PhotoReflector(A4),
		PhotoReflector(A3),
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