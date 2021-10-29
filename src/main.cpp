#include "hextile.h"

#include <Arduino.h>

#include <WS2812Serial.h>
#define USE_WS2812SERIAL
#include <FastLED.h>
#define FASTLED_INTERNAL 


//Data pin for leds are required to be serial
//   Teensy 4.1:  1, 8, 14, 17, 20, 24, 29, 35, 47, 53
//standard boilerplate for my LED codes
#define DATA_PIN             14         // Output pin for LEDs [5]
#define COLOR_ORDER         GRB         // Color order of LED string [GRB]
#define CHIPSET             WS2812B     // LED string type [WS2182B]
#define BRIGHTNESS          96          // Overall brightness [50]
#define NUM_LEDS 192                    // There are 25 LEDs on this strand

CRGB leds[NUM_LEDS];
//uint8_t brightness = BRIGHTNESS;
Hexagon hex1(0,0,1);
void setup() {
  Serial.begin(57600);
  Serial.println("resetting");
  LEDS.addLeds<WS2812SERIAL,DATA_PIN,RGB>(leds,NUM_LEDS);
  LEDS.setBrightness(BRIGHTNESS);

  //Clear the LED strip
  FastLED.clear();
  //Hexagon(int q, int r,int hex_Number );

  
}

void loop() {
  //FastLED.show();   // Show the next frame of the LED pattern
  //delay(10);        // Slow down the animation slightly
  fill_solid( leds, NUM_LEDS, CRGB(50,0,200));
  Serial.println("green");
  FastLED.show();
  delay(1000);

  hex1.fill_hexagon(leds,CRGB(0,255,0) );
  Serial.println("one red");
  FastLED.show();
  delay(1000);
}