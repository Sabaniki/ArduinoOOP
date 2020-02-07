#ifndef ___Cpp_Timer
#define ___Cpp_Timer
#include "Timer.h"

Timer::Timer(unsigned long targetTime, CallbackFunction funcRef, bool allowOverrun):
targetTime(targetTime),
callback(funcRef),
allowOverrun(allowOverrun),
isReached(false),
isFirst(true){
    // this->targetTime = targetTime;
    // this->callback = funcRef;
}

void Timer::start() {
	this->startTime = millis(); 
}

void Timer::update(){
    unsigned long now = startTime + targetTime;
    if(now > millis()) return;
	if(now == millis() && isFirst){
        callback();
        this->isReached = true;
        this->isFirst = false;
        return;
    }
    if (this->allowOverrun) {
        callback();
    }
}

#endif
