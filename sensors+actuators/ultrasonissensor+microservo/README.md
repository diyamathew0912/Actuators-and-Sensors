# Automatic Barrier Gate System

## Description
This project uses an HC-SR04 ultrasonic sensor to detect nearby objects and controls a servo motor to simulate an automatic gate.

## Components Required
- Arduino Uno
- HC-SR04 Ultrasonic Sensor
- Micro Servo Motor
- Breadboard
- Jumper Wires

## Connections

### Ultrasonic Sensor
- VCC → 5V
- GND → GND
- TRIG → Digital Pin 9
- ECHO → Digital Pin 10

### Servo Motor
- Red Wire → 5V
- Brown/Black Wire → GND
- Signal Wire → Digital Pin 6

## Working Principle
1. The ultrasonic sensor measures the distance to nearby objects.
2. Arduino processes the distance value.
3. If an object is detected within 15 cm, the servo motor rotates to open the gate.
4. When the object moves away, the gate closes.

## Applications
- Automatic parking barriers
- Smart entry systems
- Access control systems
- Automation projects

## Files
- code.ino
- README.md

## Author
Diya Mathew

## Platform
Arduino Uno / Tinkercad Simulation
