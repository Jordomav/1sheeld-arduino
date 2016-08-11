#include <Arduino.h>
#include <OneSheeld.h>

int pinLed = 13;


void setup () {
    OneSheeld.begin();
    pinMode(pinLed, OUTPUT);
}

void loop () {
    if (Mic.getValue() > 70) {
        digitalWrite(pinLed, 1);
    } else {
        digitalWrite(pinLed, 0);
    }
}