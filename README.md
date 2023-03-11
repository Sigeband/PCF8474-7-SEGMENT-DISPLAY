# PCF8474-7-SEGMENT-DISPLAY

DIY 7-Segment display with an pcf8574 working via i2c with the pcf8574 library.

## This mini-project is still work in progress!
Pinout will follow soon, together with a list of witch pins to asign to what segment.
Also maybe ill build a library to just put the functions in the library, so they dont need to be inluded in the code that utilizes the display.
Currently the code defines the functions with the pins assigned to the different segments, and switching them to low, if the led should turn on.
The current code just counts seconds to 9 and then resets to 0 again.


![20230310_174715](https://user-images.githubusercontent.com/114338337/224480518-e5520e62-bd6b-456c-b602-249eb714b3e2.jpg)
