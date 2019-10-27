#ifndef ___Class_ColorSensor
#define ___Class_ColorSensor
#include "ColorLED.h"
class ColorSensor {
private:
    int thresholds[3][3];
    ColorLED light;
    int aveR, aveG, aveB;
	const int colorNum = 3;
	const int loopNum = 10;
	int mined[3][3];
	int colorArray[3];
	int readValue[3];
	int copyedColorArray[3];
	const char G = 'G', W = 'W', Bl = 'B';

public:
    ColorSensor(int Rpin, int Gpin, int Bpin, const int (&thresholdsRGB)[3][3]);
};

#endif
