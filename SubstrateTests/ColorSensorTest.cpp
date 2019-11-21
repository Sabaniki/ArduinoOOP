#define DEBUG
#include <Arduino.h>
#include "AnalogPin.h"
#include "DigitalPin.h"
#include "DigitalPin.cpp"
#include "ColorLED.h"
#include "ColorSensor.h"
#include "ColorSensor.cpp"
#include "Motor.h"
#include "Motor.cpp"
#include "PhotoReflector.h"
#include "UltrasonicSensor.h"
#include "RotaryEncoder.h"
#include "RotaryEncoder.cpp"
void setup() {
	Serial.begin(9600);
}

const int thresholdsOfRGB[3][3] = {
    { 0, 4, 1 },    //G
    { 4, 12, 4 },   //W
    { 0, 1, 0 },    //B
};

void loop() {
    auto colorSensor = ColorSensor(10, 9, 8, A0, thresholdsOfRGB);
    while (true){
        Serial.println(colorSensor.read());
        delay(100);
        Serial.print("RedValue: ");
        Serial.println(colorSensor.readValueRed());
        delay(100);

        Serial.print("GreenValue: ");
        Serial.println(colorSensor.readValueGreen());
        delay(100);

        Serial.print("BlueValue: ");
        Serial.println(colorSensor.readValueBlue());
        delay(100);
        Serial.println();
    }
}