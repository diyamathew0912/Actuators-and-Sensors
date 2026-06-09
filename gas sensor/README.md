# MQ-2 Gas Sensor Test (Debug Version)

## About
This project is a simple test to check if the MQ-2 gas sensor is working properly with Arduino.

It only reads and displays raw sensor values in the Serial Monitor.

---

## Components
- Arduino Uno  
- MQ-2 Gas Sensor  
- Jumper wires  

---

## Connections
- Sensor A2 → Arduino A0  
- B1 → 5V  
- B2 → GND  
- H2 → Not used  

---

## Working
The Arduino reads analog values from the MQ-2 sensor and prints them to the Serial Monitor.

Higher values indicate more gas/smoke presence.

---

## Output
- Clean air → Low values  
- Gas/smoke present → Higher values  

---

## Purpose
This is a testing/debug project to confirm sensor wiring and functionality before adding alarms or buzzer systems.
