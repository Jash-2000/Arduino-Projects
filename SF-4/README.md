# SF-4 Assignment : Creation of Home Thermostat

![Thermostat](https://github.com/Jash-2000/Arduino-Projects/blob/master/Images/Thermostat.jpg)

Psudo Code for SF-4
```
Create a home thermostat with a potentiometer, LEDs (choose: 2 LEDs (red and blue), or one RGB), a temperature sensor, and an LCD 
(optional, can be replace with serial monitor).
  1. LCD/Serial monitor greets users with a welcome message.
  2. LCD/Serial Monitor displays the ambient temperature in deg.F in one line, and the set temperature (desired room temp) controlled 
  by Potentiometer on the next line. LCD refreshes every 5 seconds or less.
  3. When the ambient temp <= (set temp-1), the red LED turns on and LCD/SM displays “heater ON!”
  4. When the ambient tem>= (set temp+1), blue LED turns on and LCD/SM displays “AC ON!”
  5. Both LEDs cannot be on at the same time!
  6. When the temperature is within ± 1deg.F of the set temperature, repeat step 2 and LEDs are OFF.
  7. Create two separate custom functions for the heater and the AC.
```

---

## Schematic and TinkerCAD brd

