# ESP32 Button-Controlled LED – Software Debouncing

## Author
SELVASH

## Project Description
This project controls an external LED using a push button.
Software debouncing is used to prevent false button presses.

## Components
- ESP32
- Push Button
- LED
- 220Ω Resistor

## Connections
- Push Button → GPIO 4
- Push Button → GND
- LED → GPIO 5
- LED → 220Ω Resistor → GND

## Working
When the push button is pressed, the LED changes its state.
A 50 ms delay is used for software debouncing.

## Files
- sketch.ino – Arduino program
- diagram.json – Circuit connection
- README.md – Project information

## Author
SELVASH
