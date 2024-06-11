// Define the pin connected to the LED
const int ledPin = 23;

void setup() {
  // Initialize the LED pin as an output
  pinMode(ledPin, OUTPUT);
}

void loop() {#include <Arduino.h>

  // Turn the LED on
  digitalWrite(ledPin, HIGH);
  // Wait for a second
  delay(5000);
  // Turn the LED off
  digitalWrite(ledPin, LOW);
  // Wait for a second
  delay(1000);
}