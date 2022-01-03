#include <Arduino.h>          // Main Arduino Library
#include "pinSettings.h"      // Pin Settings Setup
#include "joysticks.h"        // Joysticks Positions

// Define Global Variables
int joystick1xValue = 512;
int joystick1yValue = 512;


// Read Joysticks Positions
void joysticksRead() {

  joystick1xValue = analogRead(joystick1x);
  joystick1yValue = analogRead(joystick1y);

}


void joysticksPrint() {

  Serial.print("J1 -- ");
  Serial.print("X: ");
  Serial.print(joystick1xValue, DEC);
  Serial.print(" | Y: ");
  Serial.println(joystick1yValue, DEC);

  delay(1000);

}