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
    Timer timer = Timer(&func);
}