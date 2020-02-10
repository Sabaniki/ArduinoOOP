#pragma once
#include "Arduino.h"
using CallbackFunction = void (*)();

class Timer {
private:
    unsigned long startTime;
    unsigned long targetTime;
    bool allowOverrun;
    CallbackFunction callback;
    bool isReached;
    bool isFirst;


public:
    static unsigned long createTime(int hour, int min, int sec, int msec);
    // targetTime: 目標値（ミリ秒）, allowOverrun: オーバーランの許可, funcRef: 目標時間が来たときに実行する関数
    Timer(unsigned long targetTime, bool allowOverrun , CallbackFunction funcRef);

    // タイマーの開始
    void start();

    // 更新処理 時間に達していた場合callbackを実行
    bool update();

    // 目標時刻に達しているかどうかを返す
    bool getIsReached() { return this->isReached; }

    // 目標時刻に達していないかどうかを返す
    bool getIsUnreached() { return !this->isReached; }

    unsigned long readTime() { return (millis() - startTime); }
};
