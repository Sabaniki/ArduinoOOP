#ifndef ___Class_KuromikaLine
#define ___Class_KuromikaLine
#include "AnalogPin.h"
#include "AnalogPin.cpp"
#include "DigitalPin.h"
#include "DigitalPin.cpp"
class KuromikaLine {
private:
    AnalogPin readers[4] = { 
        AnalogPin(),
        AnalogPin(),
        AnalogPin(),
        AnalogPin(),
    };
    
    DigitalPin green;
    bool result = false;
    int threshold;
    int beforeValue = 0;
    int nextValue = 0;
    int diff = 0;


public:
    // readerPins: { pin1: int, ... pin4: int } ← 本当はpin5まで
    KuromikaLine(int greenPin, const int (&reaerPins)[4],  int threshold);

    // 黒が返ってくるかどうか
    bool read();
};

#endif
