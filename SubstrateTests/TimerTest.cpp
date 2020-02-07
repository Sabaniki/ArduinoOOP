#define DEBUG
#include "Timer.h"
#include "Arduino.h"
void setup() {
	Serial.begin(9600);
}

void func1() {
    Serial.println("on func1"); 
}

void func2() { 
    Serial.println("on func2");
}

void loop() {
    auto timer1 = Timer(5000, &func1, false);
    auto timer2 = Timer(7000, &func2, false);
    timer1.start();
    timer2.start();
    while (timer1.getIsUnreached() || timer2.getIsUnreached()) {
        timer1.update();
        timer2.update();
    }
    while (true);
}