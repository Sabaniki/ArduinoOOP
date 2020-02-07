#pragma once
#include "Arduino.h"
#include "DigitalPin.h"
#include "DigitalPin.cpp"
class ColorLED {
private:
    DigitalPin red, green, blue;

public:
    ColorLED(int redPin, int greenPin, int bluePin);
    void writeRed(bool mode);
    void writeGreen(bool mode);
    void writeBlue(bool mode);

    void writeRed(bool mode){
        red.write(mode);
    }

    void writeGreen(bool mode){
        green.write(mode);
    }

    void writeBlue(bool mode){
        blue.write(mode);
    }
};

