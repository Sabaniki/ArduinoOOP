#ifndef ___Cpp_KuromikaLine
#define ___Cpp_KuromikaLine
#include "KuromikaLine.h"
#include "Arduino.h"

KuromikaLine::KuromikaLine(int Rpin, int Lpin, const int (&readerPins)[4], const int (&thresholdsRG)[2]) {
    for (size_t i = 0; i < 4; i++)
        readers[i].initPin(readerPins[i]);
    
}
#endif
