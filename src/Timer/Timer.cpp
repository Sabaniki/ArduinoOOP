#include "Timer.h"

Timer::Timer(unsigned long targetTime, bool allowOverrun , CallbackFunction funcRef):
    targetTime(targetTime),
    allowOverrun(allowOverrun),
    callback(funcRef),
    isReached(false),
    isFirst(true),
    startTime(0UL){
}

void Timer::start() {
	this->startTime = millis(); 
}

unsigned long Timer::createTime(int hour, int min, int sec, int msec) {
    unsigned long time = 0UL;
    time += hour * 60 * 60 * 1000UL;
    time += min * 60 * 1000UL;
    time += sec * 1000UL;
    time += msec;
    return time;
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
