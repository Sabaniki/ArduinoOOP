#ifndef ___Class_KuromikaLine
#define ___Class_KuromikaLine
#include "AnalogPin.h"
#include "AnalogPin.cpp"
class KuromikaLine {
private:
    AnalogPin readers[4] = { 
        AnalogPin(),
        AnalogPin(),
        AnalogPin(),
        AnalogPin(),
    };

public:
    // readerPins: { pin1: int, ... pin4: int } ← 本当はpin5までだけど篠崎がやらかしたからとりあえず4まで
    KuromikaLine(int Rpin, int Lpin, const int (&reaerPins)[4], const int (&thresholdsRG)[2]);

};

#endif
