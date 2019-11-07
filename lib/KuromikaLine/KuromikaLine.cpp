#ifndef ___Cpp_KuromikaLine
#define ___Cpp_KuromikaLine
#include "KuromikaLine.h"
#include "Arduino.h"

KuromikaLine::KuromikaLine(int redPin, int greenPin, int readerPin, int threshold):
    redLED(redPin, OUTPUT),
    greenLED(greenPin, OUTPUT),
    reader(readerPin){
    greenLED.write(true);
}

inline bool KuromikaLine::read(){
    return (reader.read() < threshold);
}
#endif
