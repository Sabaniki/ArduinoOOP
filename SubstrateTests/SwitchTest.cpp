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
#include "Server.h"
#include "UltrasonicSensor.h"
#include "UltrasonicSensor.cpp"
void setup() {
	Serial.begin(9600);
}

void loop() {
    DigitalPin switches[2] = {
        DigitalPin(29, INPUT_PULLUP), 
        DigitalPin(45, INPUT_PULLUP) 
    };
    while (true){
        Serial.print("switch 0: ");
        Serial.println(switches[0].read());
        //Serial.print("switch 1: ");
        //Serial.println(switches[1].read());
        Serial.println();
        delay(1);
    }
}