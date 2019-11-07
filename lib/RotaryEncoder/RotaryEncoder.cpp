#ifndef ___Cpp_RotaryEncoder
#define ___Cpp_RotaryEncoder
#include "RotaryEncoder.h"
#include "PhotoReflector.h"
#include "PhotoReflector.cpp"
#include "Arduino.h"

RotaryEncoder::RotaryEncoder(int readerPin):
    reader(readerPin) {

}

bool RotaryEncoder::until(int count){
    if(finished) currentCount = count;

}
#endif
