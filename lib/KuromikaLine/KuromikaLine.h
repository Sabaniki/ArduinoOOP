#ifndef ___Class_KuromikaLine
#define ___Class_KuromikaLine
#include "AnalogPin.h"
#include "AnalogPin.cpp"
#include "DigitalPin.h"
#include "DigitalPin.cpp"
class KuromikaLine {
private:
private:
    int threshold;
    DigitalPin redLED, greenLED;
    AnalogPin reader;
    const int numOfIterartion = 5;

public:
    KuromikaLine(int redPin, int greenPin, int readerPin, int threshold);
    // 緑LEDを照射した状態で黒が返ってくるかどうか
    bool read();
};

#endif
