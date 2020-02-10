#define DEBUG
#include <Arduino.h>
#include "PhotoReflector/PhotoReflector.h"

void setup() {
	Serial.begin(9600);
}

void loop() {
    auto pht = AnalogPin(A0);
    while (true){
        Serial.print("value: ");
        Serial.println(pht.read());
    }
}