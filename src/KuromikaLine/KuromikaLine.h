#pragma once
#include "KuromikaLine.h"
#include "Arduino.h"
#include "AnalogPin/AnalogPin.h"
#include "DigitalPin/DigitalPin.h"
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

