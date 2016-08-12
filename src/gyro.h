extern int pinLed;

void gyro () {
    if(GyroscopeSensor.getX() > -1) {
        digitalWrite(pinLed, 1);
    } else {
        digitalWrite(pinLed, 0);
    }
}