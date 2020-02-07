#define DEBUG
#include "Timer.h"
#include "Arduino.h"
void setup() {
	Serial.begin(9600);
}

void func() {
    Serial.println("on func"); 
}

void loop() {
    Timer timer = Timer(5000, &func);
    timer.start();
    while (!timer.getIsReached()) {
        Serial.println(timer.readTime());
        timer.update();
    }
    while (true);
}