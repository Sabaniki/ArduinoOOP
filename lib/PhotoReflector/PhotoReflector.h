#ifndef ___Class_PhtoReflector
#define ___Class_PhtoReflector
#include "DigitalPin.h"
#include "DigitalPin.cpp"
#include "AnalogPin.h"
#include "AnalogPin.cpp"
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

#endif