#include "Timer.h"

Timer::Timer(unsigned long targetTime, bool allowOverrun , CallbackFunction funcRef):
    targetTime(targetTime),
    allowOverrun(allowOverrun),
    callback(funcRef),
    isReached(false),
    isFirst(true){
}

void Timer::start() {
	this->startTime = millis(); 
}

bool Timer::update(){
    unsigned long now = startTime + targetTime;
    if(now > millis()) return Timer::getIsUnreached();
	if(now == millis() && isFirst){
        callback();
        this->isReached = true;
        this->isFirst = false;
        return Timer::getIsUnreached();
    }
    if (this->allowOverrun) {
        callback();
        return Timer::getIsUnreached();
    }
    return Timer::getIsUnreached();
}
