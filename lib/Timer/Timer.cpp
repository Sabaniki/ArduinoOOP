#ifndef ___Cpp_Timer
#define ___Cpp_Timer
#include "Timer.h"

Timer::Timer(unsigned long targetTime, CallbackFunction funcRef):
targetTime(targetTime),
callback(funcRef),
isReached(false) {
    // this->targetTime = targetTime;
    // this->callback = funcRef;
}

void Timer::start() {
	this->startTime = millis(); 
}

void Timer::update(){
	if((startTime + targetTime) <= millis()){
        callback();
        this->isReached = true;
    }
}

#endif
