# Motion Alert System

## Description
This project uses a PIR motion sensor to detect movement and activates a vibration motor as an alert mechanism.

## Components Required
- Arduino Uno
- PIR Motion Sensor
- Vibration Motor
- PN2222 / 2N2222 Transistor
- 1kΩ Resistor
- Breadboard
- Jumper Wires

## Connections

### PIR Sensor
- VCC → 5V
- GND → GND
- OUT → Digital Pin 2

### Vibration Motor
- Positive (+) → 5V
- Negative (-) → Collector of transistor

### Transistor
- Base → Digital Pin 8 through 1kΩ resistor
- Collector → Motor Negative
- Emitter → GND

## Working Principle
1. The PIR sensor monitors movement.
2. When motion is detected, Arduino activates the vibration motor.
3. The motor provides a vibration alert.
4. When no motion is present, the motor stops.

## Applications
- Security systems
- Motion alarms
- Smart door alerts
- Intruder detection

## Files
- code.ino
- README.md

## Author
Diya Mathew

## Platform
Arduino Uno / Tinkercad Simulation
