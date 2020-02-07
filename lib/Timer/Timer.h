#ifndef ___Class_Timer
#define ___Class_Timer
using CallbackFunction = void (*)();

class Timer {
private:
    CallbackFunction callback;

public:
    Timer(CallbackFunction funcRef);
    void invokeCallback();
};

#endif
