// Simple example application that shows how to read four Arduino
// digital pins and map them to the USB Joystick library.
//
// Ground digital pins 9, 10, 11, and 12 to press the joystick 
// buttons 0, 1, 2, and 3.
//
// NOTE: This sketch file is for use with Arduino Leonardo and
//       Arduino Micro only.
//
// by Matthew Heironimus
// 2015-11-20
//--------------------------------------------------------------------
#define HBAxis          A0

#include <Joystick.h>

Joystick_ Joystick(0x09,
                   JOYSTICK_TYPE_JOYSTICK, 0, 0,
                   false, false, false, false, false, false,
                   false, false, false, true, false);

void setup() {
  
  // Initialize Button Pins
  
  pinMode(HBAxis, INPUT_PULLUP);
   
  Joystick.setBrakeRange(analogRead(HBAxis),1023);
  
//Serial.begin(9600);
  // Initialize Joystick Library
  Joystick.begin(true);
}


// Constant that maps the phyical pin to the joystick button.


// Last state of the button

void loop() {
  
 // int LBVal = analogRead(HBAxis);
//  Serial.println("HBAxis: " + String(LBVal));

  Joystick.setBrake(analogRead(HBAxis));
  
  

//delay(50);
}
