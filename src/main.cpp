#include <Arduino.h>

#include <OneSheeld.h>

#include <keypad.h>
#include <mic.h>
#include <pattern.h>
#include <gyro.h>
#include <accel.h>
#include <sms.h>
#include <notification.h>

int pinLed = 13;

int counter = 0;

int length = 0;

int button = 10;


void setup () {
    OneSheeld.begin();
    pinMode(pinLed, OUTPUT);
    pinMode(button, INPUT);
}

void loop () {
//  Use the Keypad to turn on the led in pin 13 on with 1 and off with 2
//    keypad();

//  Use the mic in your phone to make the led in pin 13 turn on if the voice level gets to 80 db
//    mic();

//  Enter the correct pattern (a strait line down the left of the screen) to turn on the led, all other patterns
//  turning it off
//    pattern();

//  Use the Gyroscope on your phone to turn on and off an led
//    gyro();


//  Turn on the led using the phones accelerometer
//    accel();

//  Click on a button in pin 10 to send a text message to the user
//    sms();

//  Send the user a notification if the button in pin 10 is clicked
//   notify();

}