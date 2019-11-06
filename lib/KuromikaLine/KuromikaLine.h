#ifndef ___Class_KuromikaLine
#define ___Class_KuromikaLine
#include "AnalogPin.h"
#include "AnalogPin.cpp"
#include "DigitalPin.h"
#include "DigitalPin.cpp"
class KuromikaLine {
private:
    AnalogPin reader;
    DigitalPin green;
    bool result;
    int threshold;
    int beforeValue = 0;
    int nextValue = 0;
    int sumOfDeviation = 0;


public: 
    KuromikaLine(int greenPin, int reader,  int threshold, bool isCenter);

    // 黒が返ってくるかどうか
    bool read();
};

#endif
