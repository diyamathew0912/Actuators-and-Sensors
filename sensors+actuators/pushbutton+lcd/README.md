# Push Button Controlled LCD Display

## Description
This project uses a push button as the input sensor and a 16x2 LCD as the output display. The LCD shows different messages depending on whether the button is pressed or released.

## Components Required
- Arduino Uno
- Push Button
- LCD 16x2 Display
- 10kΩ Potentiometer
- 220Ω Resistor
- Breadboard
- Jumper Wires

## Circuit Connections

### Push Button
- One terminal → Digital Pin 7
- Other terminal → GND

### LCD 16x2

| LCD Pin | Connection |
|----------|------------|
| GND | GND |
| VCC | 5V |
| V0 | Potentiometer Middle Pin |
| RS | D12 |
| RW | GND |
| E | D11 |
| DB4 | D5 |
| DB5 | D4 |
| DB6 | D3 |
| DB7 | D2 |
| LED+ | 5V through 220Ω resistor |
| LED- | GND |

### Potentiometer
- Left Pin → 5V
- Middle Pin → LCD V0
- Right Pin → GND

## Working Principle
1. Arduino continuously monitors the push button.
2. When the button is pressed, the LCD displays:
   - BUTTON
   - PRESSED
3. When the button is released, the LCD displays:
   - PRESS
   - BUTTON
4. The potentiometer controls the LCD contrast.

## Applications
- User interface systems
- Electronic control panels
- Interactive displays
- Embedded system projects

## Files
- code.ino
- README.md

## Author
Diya Mathew

## Platform
Arduino Uno / Tinkercad Simulation
