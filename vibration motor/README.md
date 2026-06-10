# Vibration Motor Arduino Project

## Description
This project controls a vibration motor using an Arduino UNO. The motor is switched ON and OFF using a digital pin or PWM control.

## Components Used
- Arduino UNO
- Vibration motor
- NPN transistor (2N2222 recommended)
- 1kΩ resistor
- (Optional) Diode 1N4007
- Breadboard & wires

## Working Principle
Arduino sends a HIGH signal to the transistor base. The transistor acts as a switch and powers the motor using external 5V.

## Code
Upload the provided Arduino sketch to control vibration patterns.

## Output
Motor vibrates in ON/OFF or pulse mode depending on code.

## Safety Note
Do not connect motor directly to Arduino pins in real hardware.
