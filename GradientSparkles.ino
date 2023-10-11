#include <FastLED.h>

#define NUM_LEDS 30
#define LED_PIN 6

uint8_t paletteIndex = 0;

DEFINE_GRADIENT_PALETTE( purpleorange_gp ) {
    0,    0,  0,255,
  127,  255,  0,255,
  255,  255,128,  0
};

DEFINE_GRADIENT_PALETTE( fire_gp ){
  0,255,128,0,
  191,255,0,0,
  255,255,255,0
};

CRGBPalette16 purpPal = fire_gp;

CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<WS2812B, LED_PIN, GRB>(leds, NUM_LEDS);
  FastLED.setBrightness(100);
}

void loop() {
  EVERY_N_MILLISECONDS(50){
    //picks a random led and sets the colour to a random one from the palette
    leds[random16(0, NUM_LEDS - 1)] = ColorFromPalette(purpPal, random8(), 255, LINEARBLEND);
  }

  EVERY_N_MILLISECONDS(2){
    //Fade all LEDs down in brightness every time this is called
    fadeToBlackBy(leds, NUM_LEDS, 1);
  }


  FastLED.show();
}
