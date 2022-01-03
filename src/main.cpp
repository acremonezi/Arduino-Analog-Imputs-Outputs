#include <Arduino.h>
#include "main.h"

void setup() {
  
  Serial.begin(9600);         // Start Serial Communication  
  pinSettings();              // Pin Settings Setup

}


void loop() {

  // Main Functions
    joysticksRead();          // Read Joysticks Positions

  // Debug Functions
    joysticksPrint();         // Print Joysticks Data
 
}