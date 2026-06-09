# Force Sensor (FSR) with Arduino

## About
This project detects pressure or force using a Force Sensitive Resistor (FSR) and controls an LED.

## Components
- Arduino Uno  
- Force Sensor (FSR)  
- 10k Resistor  
- LED  

## Connections
- FSR → A0  
- 10k resistor → A0 to GND  
- LED → D9  

## Working
When pressure is applied on the sensor, resistance changes and Arduino detects force.

## Output
- Force applied → LED ON  
- No force → LED OFF  

## Applications
- Pressure sensing  
- Smart touch systems  
- Robotics grippers  
