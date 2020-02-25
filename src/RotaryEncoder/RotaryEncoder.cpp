#include "RotaryEncoder.h"

RotaryEncoder::RotaryEncoder(int readerPin, int thresholdOfPht) :
        pht(readerPin, thresholdOfPht) {
}

bool RotaryEncoder::until(int count) {
    if (finished)
        currentCount = count;
    nowState = pht.read();
    finished = false;
    if (beforeState != nowState) {
        currentCount--;
        finished = !(currentCount > 0);
    }
    beforeState = nowState;
    delay(1);
    return !finished;
}

inline int RotaryEncoder::getCurrentCount() {
    return currentCount;
}
