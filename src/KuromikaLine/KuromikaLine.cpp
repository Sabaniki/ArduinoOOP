#include "KuromikaLine.h"

KuromikaLine::KuromikaLine(int greenPin, int readerPin, int threshold):
    threshold(threshold),
    greenLED(greenPin, OUTPUT),
    reader(readerPin){
    greenLED.write(true);
    delay(1);
}

inline bool KuromikaLine::read(){
    return (reader.read() < threshold);
}

inline void KuromikaLine::setNumOfIteration(int numOfIteration){
    this->numOfIteration = numOfIteration;
}
