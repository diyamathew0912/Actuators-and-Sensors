# LED Blinking using Arduino

## Overview
This project demonstrates how to control an LED using an Arduino Uno. The LED blinks continuously with a one-second interval.

## Components Used
- Arduino Uno
- LED
- 220Ω Resistor
- Breadboard
- Jumper Wires

## Circuit Connections
- LED Anode (+) → Arduino Digital Pin 13
- LED Cathode (-) → GND through a 220Ω resistor

## Arduino Code

```cpp
int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);
  delay(1000);

  digitalWrite(ledPin, LOW);
  delay(1000);
}
