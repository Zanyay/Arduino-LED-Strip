#include <FastLED.h>

#define NUM_LEDS  30
#define LED_PIN   6

CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<WS2812B, LED_PIN, GRB>(leds, NUM_LEDS);
  FastLED.setBrightness(50);
}

void loop() {
  fill_solid(leds, NUM_LEDS, CRGB::White);
  
  FastLED.setCorrection(UncorrectedColor);
  //leds[0] = CRGB::Red;
  FastLED.show();
  delay(2000);

  FastLED.setCorrection(TypicalLEDStrip);
  //leds[0] = CRGB::Green;
  FastLED.show();
  delay(2000);

  FastLED.setCorrection(TypicalPixelString);
  //leds[0] = CRGB::Blue;
  FastLED.show();
  delay(2000);
  
}