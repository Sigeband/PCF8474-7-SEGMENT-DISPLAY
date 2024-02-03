# PCF8474-7-SEGMENT-DISPLAY

DIY 7-Segment display with a PCF8574 working via I2C with the PFC8574 library.

 ## Pinout:
 

This picture shows which segments' negative terminals are connected to which pins of the PCF8574.
![P0](https://github.com/Sigeband/PCF8474-7-SEGMENT-DISPLAY/assets/114338337/df9d7c05-8d5f-45a6-85fb-0418817ccd6d)


pcf8574:
![PCF8574-pins](https://github.com/Sigeband/PCF8474-7-SEGMENT-DISPLAY/assets/114338337/4ba14030-080b-4963-b8c1-dac80deac128)

Pins 1, 2, 3 -> GND
Pins 8 -> GND
Pins 14, 15 -> SDA, SCL; they are pulled up via 4.7k resistors connected to 5v"
Pins 16 -> 5v
All the LEDs' positive terminals are connected to 5v, with a single 330-ohm resistor in between.

 


The current example code just counts seconds to 9 and then resets to 0 again to demonstrate the basics.
Currently, the code defines the functions with the pins assigned to the different segments and switches them to low if the LED should turn on.




![20230310_174715](https://user-images.githubusercontent.com/114338337/224480518-e5520e62-bd6b-456c-b602-249eb714b3e2.jpg)
