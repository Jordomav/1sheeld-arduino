extern int pinLed;

void mic () {
    if (Mic.getValue() > 70) {
        digitalWrite(pinLed, 1);
    } else {
        digitalWrite(pinLed, 0);
    }
}