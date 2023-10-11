#include <FastLED.h>

#define LED_PIN 6
#define NUM_LEDS 300

CRGB leds[NUM_LEDS];

uint8_t hue = 0;

void setup() {
  FastLED.addLeds<WS2812B, LED_PIN, GRB>(leds, NUM_LEDS);
  FastLED.setBrightness(50);
}

void loop() {
  for (int i = 0; i<NUM_LEDS; i++){
    leds[i] = CHSV(hue + (i * 5), 255, 255);
  }

  //better verison of delay
  //allows other code to run, based off of internal timer and not order of code
  EVERY_N_MILLISECONDS(10){
    hue++;
  }

  FastLED.show();
}
