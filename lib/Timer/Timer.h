#ifndef ___Class_Timer
#define ___Class_Timer
#include "Arduino.h"
using CallbackFunction = void (*)();

class Timer {
private:
    unsigned long startTime;
    unsigned long targetTime;
    CallbackFunction callback;

public:
    Timer(unsigned long targetTime, CallbackFunction funcRef);
    void start();
    bool update();
};

#endif
