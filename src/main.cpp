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
    { 27, 65, 47 },  //G
    { 80, 127, 92 },  //W
    { 30, 58, 44 },  //B
};

void loop() {
    auto colorSensorL = ColorSensor(15, 14, 8, A8, thresholdsOfRGB);
    auto colorSensorR = ColorSensor(15, 14, 8, A9, thresholdsOfRGB);
    while (true){
        Serial.print("RedValue L: ");
        Serial.println(colorSensorL.readValueRed());
        delay(100);

        Serial.print("GreenValue L: ");
        Serial.println(colorSensorL.readValueGreen());
        delay(100);

        Serial.print("BlueValue L: ");
        Serial.println(colorSensorL.readValueBlue());
        
        Serial.println();

        Serial.print("RedValue R: ");
        Serial.println(colorSensorR.readValueRed());
        delay(100);

        Serial.print("GreenValue R: ");
        Serial.println(colorSensorR.readValueGreen());
        delay(100);

        Serial.print("BlueValue R: ");
        Serial.println(colorSensorR.readValueBlue());
        delay(100);
        Serial.println();
        Serial.print(colorSensorL.read());
        Serial.println(colorSensorR.read());
        Serial.println();
    }
}