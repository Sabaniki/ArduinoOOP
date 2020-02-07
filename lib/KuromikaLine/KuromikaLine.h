#pragma once
#include "KuromikaLine.h"
#include "Arduino.h"
#include "AnalogPin.h"
// #include "AnalogPin.cpp"
#include "DigitalPin.h"
// #include "DigitalPin.cpp"
class KuromikaLine {
private:
private:
    int threshold;
    DigitalPin greenLED;
    AnalogPin reader;
    int numOfIteration = 5;

public:
    KuromikaLine(int greenPin, int readerPin, int threshold);
    // 緑LEDを照射した状態で黒が返ってくるかどうか
    bool read();
    void setNumOfIteration(int numOfIteration);
};

