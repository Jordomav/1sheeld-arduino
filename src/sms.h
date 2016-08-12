extern int button;

void sms () {
    if (digitalRead(button) == 1) {
        SMS.send('+15597797095', "button clicked");
    }
}