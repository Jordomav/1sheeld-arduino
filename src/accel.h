extern int pinLed;

void accel () {
    if (AccelerometerSensor.getX() > 8) {
        digitalWrite(pinLed, 1);
    } else {
        digitalWrite(pinLed, 0);
    }

    if (AccelerometerSensor.getY() > 8) {
        digitalWrite(pinLed, 1);
    } else {
        digitalWrite(pinLed, 0);
    }

    if (AccelerometerSensor.getZ() > 8) {
        digitalWrite(pinLed, 1);
    } else {
        digitalWrite(pinLed, 0);
    }
}