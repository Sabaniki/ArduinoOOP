#include <Arduino.h>
#include "AnalogPin.h"
void setup() {
}

void loop() {
	auto led = AnalogPin(12);
	while(true){
		for (size_t i = 0; i < 100; i++){
			led.write(i);
			delay(20);
		}
	}
}