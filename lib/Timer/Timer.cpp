#ifndef ___Cpp_Timer
#define ___Cpp_Timer
#include "Timer.h"

Timer::Timer(unsigned long targetTime, CallbackFunction funcRef) {
    this->targetTime = targetTime;
    this->callback = funcRef;
}

void Timer::start() {
	this->startTime = millis(); 
}

bool Timer::update(){
	if((startTime + targetTime) == millis()){
        callback();
		return true;
    }
        return false;
}

#endif
