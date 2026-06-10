# LCD Display using Arduino

## Aim

To display a text message on a 16x2 LCD using Arduino Uno.

## Components Used

* Arduino Uno
* LCD 16x2 Display
* 220Ω Resistor (for LCD backlight)
* Jumper Wires

## Connections

* GND → GND
* VCC → 5V
* VO → GND
* RS → D12
* RW → GND
* E → D11
* DB4 → D5
* DB5 → D4
* DB6 → D3
* DB7 → D2
* LED Anode (A) → 5V through 220Ω resistor
* LED Cathode (K) → GND

## Arduino Code

Uses the LiquidCrystal library to display text on the LCD screen.

## Working

The Arduino initializes the LCD and displays the message "Hello Diya!" on the first line of the screen. The LCD continuously shows the message during simulation.

## Applications

* Digital Information Displays
* Embedded Systems
* Smart Home Devices
* Menu Systems
* Industrial Monitoring

## Result

The 16x2 LCD successfully displayed the message "Hello Diya!" using Arduino Uno.

