#ifndef ___Cpp_Timer
#define ___Cpp_Timer
#include "Timer.h"
#include "Arduino.h"

Timer::Timer(CallbackFunction funcRef) {
    callback = funcRef; 
}

void Timer::invokeCallback() { callback(); }

#endif
