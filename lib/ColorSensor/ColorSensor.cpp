#include "ColorSensor.h"
#include "Arduino.h"

ColorSensor::ColorSensor(int Rpin, int Gpin, int Bpin, const int (&thresholdsRGB)[3][3]): 
light(Rpin, Gpin, Bpin) {
    for (size_t i = 0; i < 3; i++)
        for (size_t j = 0; j < 3; j++)
            thresholds[i][j] = thresholdsRGB[i][j];
        
    for (size_t i = 0; i < 3; i++){
        for (size_t j = 0; j < colorNum; j++)
            mined[i][j] = 0;
        colorArray[i] = 0;
        readValue[i] = 0;
        copyedColorArray[i] = 0;
        
    }
}

int ColorSensor::readValueRed(){
    
}

int ColorSensor::readValueGreen(){

}

int ColorSensor::readValueBlue(){

}