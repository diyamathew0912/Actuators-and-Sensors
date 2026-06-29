# Pressure Controlled Motor System

## Description
This project uses a Force Sensitive Resistor (FSR) to detect pressure and control a DC motor. The motor turns ON when sufficient force is applied to the sensor.

## Components Required
- Arduino Uno
- Force Sensitive Resistor (FSR)
- DC Motor
- PN2222 / 2N2222 Transistor
- 10kΩ Resistor
- 1kΩ Resistor
- Breadboard
- Jumper Wires

## Connections

### FSR
- One terminal → 5V
- Other terminal → A0
- 10kΩ resistor from A0 to GND

### DC Motor
- Positive (+) → 5V
- Negative (-) → Collector of transistor

### Transistor
- Base → Digital Pin 9 through 1kΩ resistor
- Collector → Motor Negative
- Emitter → GND

## Working Principle
1. The FSR detects pressure.
2. Arduino reads the sensor value.
3. When pressure exceeds the threshold, the motor starts rotating.
4. When pressure is removed, the motor stops.

## Applications
- Pressure-sensitive controls
- Industrial automation
- Interactive systems
- Smart switches

## Files
- code.ino
- README.md

## Author
Diya Mathew

## Platform
Arduino Uno / Tinkercad Simulation
