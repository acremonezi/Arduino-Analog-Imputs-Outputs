#include <Arduino.h>          // Main Arduino Library
#include "pinSettings.h"      // Pin Settings Setup
#include "joysticks.h"        // Joysticks Positions

// Define Global Variables
int joystick1xValue = 512;
int joystick1yValue = 512;
int joystick2xValue = 512;
int joystick2yValue = 512;


// Read Joysticks Positions
void joysticksRead() {
  // Yaw (Left and Right)
  joystick1xValue = analogRead(joystick1x);
  // Thottle (Up and Down)
  joystick1yValue = analogRead(joystick1y);
  // Roll (Left and Rigt)
  joystick2xValue = analogRead(joystick2x);
  // Pitch (Down and Up)
  joystick2yValue = analogRead(joystick2y);
}


void joysticksPrint() {

  Serial.print("J1 -- Yaw  | Thottle -- ");
  Serial.print("X: ");
  Serial.print(joystick1xValue);
  Serial.print(" | Y: ");
  Serial.print(joystick1yValue);

  Serial.print(" -- Xm: ");
  Serial.print(joystick1xValue);
  Serial.print(" | Ym: ");
  Serial.println(joystick1yValue);

  Serial.print("J2 -- Roll | Pitch   -- ");
  Serial.print("X: ");
  Serial.print(joystick2xValue);
  Serial.print(" | Y: ");
  Serial.print(joystick2yValue);

  Serial.print(" -- Xm: ");
  Serial.print(joystick2xValue);
  Serial.print(" | Ym: ");
  Serial.println(joystick2yValue);

  delay(500);

}