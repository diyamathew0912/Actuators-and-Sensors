# Tilt Activated NeoPixel Lighting System

## Description
This project uses a tilt sensor to detect changes in orientation and controls a NeoPixel LED strip. When the sensor is tilted, all NeoPixel LEDs turn ON and glow green. When the sensor returns to its normal position, the LEDs turn OFF.

## Components Required
- Arduino Uno
- Tilt Sensor
- NeoPixel Strip (4 LEDs)
- Breadboard
- Jumper Wires
- Optional: 220Ω Resistor (between Arduino and NeoPixel data pin)

## Circuit Connections

### Tilt Sensor
- One terminal → Digital Pin 2
- Other terminal → GND

### NeoPixel Strip
- Power → 5V
- Ground → GND
- IN → Digital Pin 6
- OUT → Not Connected

## Working Principle
1. The tilt sensor acts as a switch.
2. Arduino continuously monitors the sensor state.
3. When the sensor is tilted, the NeoPixel strip lights up green.
4. When the sensor returns to its original position, the LEDs turn OFF.

## Applications
- Motion indication systems
- Orientation detection
- Smart lighting projects
- Interactive electronics projects

## Files
- code.ino
- README.md

## Author
Diya Mathew

## Platform
Arduino Uno / Tinkercad Simulation
