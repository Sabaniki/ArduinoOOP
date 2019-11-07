#ifndef ___Class_ColorSensor
#define ___Class_ColorSensor
#include "DigitalPin.h"
#include "DigitalPin.cpp"
#include "AnalogPin.h"
#include "AnalogPin.cpp"
class ColorSensor {
private:
    // { 0: 赤の閾値, 1: 緑の閾値 }
    int thresholds[2];
    DigitalPin redLED, greenLED;
    AnalogPin reader;
    const int numOfIterartion = 5;

public:
    ColorSensor(int Rpin, int Gpin, int readerPin, const int (&thresholdsRG)[2]);
    // 赤色LEDを照射した際に黒が返ってくるかどうか
    bool irradiateRed();
    // 緑色LEDを照射した際に黒が返ってくるかどうか
    bool irradiateGreen();
};

#endif
