#include "Hexagon.h"
#include "Draw.h"

#include <Arduino.h>

//#include <WS2812Serial.h>
//#define USE_WS2812SERIAL
#include <FastLED.h>
//#define FASTLED_INTERNAL 


//Data pin for leds are required to be serial
//   Teensy 4.1:  1, 8, 14, 17, 20, 24, 29, 35, 47, 53
//standard boilerplate for my LED codes
#define DATA_PIN             14         // Output pin for LEDs [5]
#define DATA_PIN             5
#define COLOR_ORDER         BRG         // Color order of LED string [BRG ]
#define CHIPSET             WS2812B     // LED string type [WS2182B]
#define BRIGHTNESS          100          // Overall brightness [50]
#define NUM_LEDS            480         // There are 25 LEDs on this strand

CRGB leds[NUM_LEDS];

Hexagon hex1(0,0,1,5);
Hexagon hex2(1,0,2,5);
Hexagon hex3(1,-1,3,5);
Hexagon hex4(2,0,4,5);
Hexagon hex5(3,0,5,5);
Draw drew(1);

int hue=0;
int delay_t=250;
//int delay_t=random(250, 500);
int dhue=5;


void setup() {

  Serial.begin(57600);
  Serial.println("resetting");
  //LEDS.addLeds<WS2812SERIAL,DATA_PIN,RGB>(leds,NUM_LEDS);
  //LEDS.setBrightness(BRIGHTNESS);
  FastLED.addLeds<WS2812B, DATA_PIN, GRB>(leds, NUM_LEDS);

  //Clear the LED strip
  FastLED.clear();

}

void loop() {
  //FastLED.show();   // Show the next frame of the LED pattern
  //delay(10);        // Slow down the animation slightly
  //fill_solid( leds, NUM_LEDS, CRGB::Green);
  //FastLED.show();
  //delay(500);


/*
  hex1.fill_hexagon(leds,CHSV( hue, 255, BRIGHTNESS) );
  hue+=dhue;



  FastLED.show();
  delay(delay_t);
  */

  drew.circle_3_expanding(hex4, leds,CHSV( hue, 255, BRIGHTNESS) );
  hue+=dhue;
  FastLED.show();
  //EVERY_N_MILLISECONDS( delay_t ) { drew.fill_hexagon(hex1, leds,CHSV( hue, 255, BRIGHTNESS) );
  //FastLED.show(); }hue+=dhue;
  drew.circle_3_expanding(hex2, leds,CHSV( hue, 255, BRIGHTNESS) );
  hue+=dhue;
  FastLED.show();

  EVERY_N_MILLISECONDS( delay_t *1.25) { drew.fill_hexagon(hex1, leds,CHSV( hue, 255, BRIGHTNESS) );
  FastLED.show(); }hue+=dhue;
  
  EVERY_N_MILLISECONDS( delay_t*.88) { drew.fill_hexagon(hex3, leds,CHSV( hue, 255, BRIGHTNESS) ); 
  FastLED.show();}hue+=dhue;
  
  EVERY_N_MILLISECONDS( delay_t*1.5) { drew.fill_hexagon(hex5, leds,CHSV( hue, 255, BRIGHTNESS) ); 
  FastLED.show();
  }
  
  //drew.fill_hexagon(hex2, leds,CHSV( hue, 255, BRIGHTNESS));
  
  FastLED.show();
  /*
  drew.fill_hexagon(hex3, leds,CHSV( hue, 255, BRIGHTNESS) );
  hue+=dhue;
  FastLED.show();
  delay(delay_t);

  drew.fill_hexagon(hex4, leds,CHSV( hue, 255, BRIGHTNESS) );
  hue+=dhue;
  FastLED.show();
  delay(delay_t);

  drew.fill_hexagon(hex5, leds,CHSV( hue, 255, BRIGHTNESS) );
  hue+=dhue;
  FastLED.show();
  delay(delay_t);
  */

  Serial.println("Xmin");
  
  Serial.println("Ymin");
  
  
}