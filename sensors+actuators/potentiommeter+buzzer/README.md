# Potentiometer Controlled Buzzer Alarm

## Description
This Arduino project uses a potentiometer as an analog sensor and a buzzer as an actuator. The Arduino continuously reads the potentiometer value and activates the buzzer when the value falls below a predefined threshold.

## Components Used
- Arduino Uno
- Potentiometer
- Piezo Buzzer
- Breadboard
- Jumper Wires

## Connections

### Potentiometer
- Left Pin → 5V
- Middle Pin → A0
- Right Pin → GND

### Piezo Buzzer
- Positive (+) → Digital Pin 8
- Negative (-) → GND

## Working Principle
1. The potentiometer provides an analog value between 0 and 1023.
2. Arduino reads the value through pin A0.
3. If the value is less than 400, the buzzer turns ON.
4. If the value is 400 or greater, the buzzer turns OFF.

## Applications
- Basic alarm systems
- Sensor-actuator demonstrations
- Arduino learning projects
- Threshold monitoring systems

## Author
Diya Mathew

## Platform
Tinkercad Arduino Simulation
