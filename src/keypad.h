extern int pinLed;
void keypad () {
    if (Keypad.isRowPressed(0) && Keypad.isColumnPressed(0)) {
        digitalWrite(pinLed, HIGH);
    }
    if (Keypad.isRowPressed(0) && Keypad.isColumnPressed(1)) {
        digitalWrite(pinLed, LOW);
    }
}