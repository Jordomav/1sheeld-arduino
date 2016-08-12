extern int pinLed;
extern int counter;
extern int length;
PatternNode patternStored[] = {{0,0}, {1,0}, {2,0}};
void pattern () {
    if(Pattern.isNewPatternReceived()) {
        PatternNode * patternEntered = Pattern.getLastPattern();

        length = Pattern.getLastPatternLength();

        if (length == 3) {
            for (int i = 0; i < length; i++) {
                if (patternEntered[i].row == patternStored[i].row && patternEntered[i].col == patternStored[i].col) {
                    counter++;
                }
            }

            if (counter == 3) {
                digitalWrite(pinLed, 1);
                counter = 0;
            } else {
                digitalWrite(pinLed, 0);
                counter = 0;
            }
        } else {
            digitalWrite(pinLed, 0);
        }
    }
}