#ifndef ___Class_Timer
#define ___Class_Timer
#include "Arduino.h"
using CallbackFunction = void (*)();

class Timer {
private:
    unsigned long startTime;
    unsigned long targetTime;
    CallbackFunction callback;
    bool allowOverrun;
    bool isReached;
    bool isFirst;


public:
    // targetTime: 目標値（ミリ秒）, funcRef: 目標時間が来たときに実行する関数, allowOverrun: オーバーランの許可
    Timer(unsigned long targetTime, CallbackFunction funcRef, bool allowOverrun);

    // タイマーの開始
    void start();

    // 更新処理 時間に達していた場合callbackを実行
    void update();

    // 目標時刻に達しているかどうかを返す
    bool getIsReached() { return this->isReached; }

    // 目標時刻に達していないかどうかを返す
    bool getIsUnreached() { return !this->isReached; }

    unsigned long readTime() { return (millis() - startTime); }
};

#endif
