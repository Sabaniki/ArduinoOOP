#pragma once
#include "Arduino.h"
#include "DigitalPin/DigitalPin.h"
class ColorLED {
private:
    DigitalPin red, green, blue;

public:
    ColorLED(int redPin, int greenPin, int bluePin);


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

