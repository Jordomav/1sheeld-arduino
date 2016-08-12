extern int pinLed;
extern int button;

void notify () {
    if(digitalRead(button) == 1) {
        Notification.notifyPhone("Looks like you pressed the button");
    }
}
