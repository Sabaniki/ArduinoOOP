#pragma once
#include "PhotoReflector.h"
#include "Arduino.h"
#include "DigitalPin.h"
#include "AnalogPin.h"
class PhotoReflector{
private:
    DigitalPin readerPinD;
    AnalogPin readerPinA;
    bool isBlack, useAsDigital;
    int threshold;

public:
    PhotoReflector(int pin);
    PhotoReflector(int pin, int threshold);
    bool read();    // 内部でdigitalReadしてboolを返す
    bool getIsBlack();  // 前回のdigitalRead結果を返す
};

