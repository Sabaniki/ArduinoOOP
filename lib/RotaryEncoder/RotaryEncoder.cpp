#ifndef ___Cpp_RotaryEncoder
#define ___Cpp_RotaryEncoder
#include "RotaryEncoder.h"
#include "PhotoReflector.h"
#include "PhotoReflector.cpp"
#include "Arduino.h"

RotaryEncoder::RotaryEncoder(int readerPin):
    pht(readerPin) {

}

bool RotaryEncoder::until(int count){
    if(finished) 
        currentCount = count;
    nowState = pht.read();
    if(beforeState != nowState){
        currentCount--;
        finished = !(currentCount > 0);
    }
    beforeState = nowState;
    return !finished;
}
#endif
