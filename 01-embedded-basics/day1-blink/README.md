# What I built
Blink LED on GPIO 2, then button on GPIO 4 controls the LED.

## How it works
- GPIO 2 = output, drives LED
- GPIO 4 = INPUT_PULLUP, LOW = button pressed

## Problems I hit and solved
A 4-pin pushbutton's legs on the same side are internally connected. Use diagonal legs. Debug by printing sensor readings before blaming logic."



Open in Wokwi: https://wokwi.com/projects/480422979820800001