#ifndef ___Cpp_ColorSensor
#define ___Cpp_ColorSensor
#include "ColorSensor.h"
#include "DigitalPin.h"
#include "DigitalPin.cpp"
#include "AnalogPin.h"
#include "AnalogPin.cpp"
#include "Arduino.h"

ColorSensor::ColorSensor(int Rpin, int Gpin, int readerPin, const int (&thresholdsRG)[2]):
redLED(Rpin, OUTPUT),
greenLED(Gpin, OUTPUT),
reader(readerPin)
{}


bool ColorSensor::irradiateRed(){
    greenLED.write(false);
    int value = 0;
    for (int i = 0; i < numOfIterartion; i++){
        redLED.write(true);
        delay(1);
        value += reader.read();
        delay(1);
        redLED.write(false);
        delay(1);
    }
    value /= numOfIterartion;
    greenLED.write(true);
    return (value < thresholds[0]);
}

bool ColorSensor::irradiateGreen(){
    greenLED.write(false);
    int value = 0;
    for (int i = 0; i < numOfIterartion; i++){
        greenLED.write(true);
        delay(1);
        value += reader.read();
        delay(1);
        greenLED.write(false);
        delay(1);
    }
    value /= numOfIterartion;
    greenLED.write(true);
    return (value < thresholds[1]);
}
#endif