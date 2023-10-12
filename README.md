# Arduino-LED-Strip
all the code I used to program a total of 600 individually-addressable RGB LEDs, using an Arduino nano!

If you wish to make your own strip using my code, I HIGHLY recommend doing your own research,
as there was alot of calculations before I even purchased my components. The 5v pin on the
Arduino does NOT provide nearly enough Amperage (Current) to power all 600 LEDs.

The strip uses 60mA (20mA per  colour) per LED at most, so to ensure a smooth operation of 600 LEDs you do:

60mA x 600 LEDs = 15 amps (roughly)

I am using a 5v 15A external power supply to power everything. MAKE SURE you do your research before trying
anything, as you run the risk of frying your LED strip or your Arduino (or both) if you don't know what
you're doing.


The type of strip I used, as specified in my code, is two WS2812B strips connected to eachother. If you
wish to use a different type of strip, make sure to change the parameter in the FastLED.addLeds function
under the void setup().


I used a breadboard to organize all of the cables nicely, however directly wiring everything works too lol.
