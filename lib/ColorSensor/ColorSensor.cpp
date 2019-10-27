#include "ColorSensor.h"
#include "Arduino.h"

ColorSensor::ColorSensor(int Rpin, int Gpin, int Bpin, const int (&thresholdsRGB)[3][3]): 
light(Rpin, Gpin, Bpin) {
    for (size_t i = 0; i < 3; i++)
        for (size_t j = 0; j < 3; j++)
            thresholds[i][j] = thresholdsRGB[i][j];
        
}
