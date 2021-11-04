#include "Draw.h"
#include "Hexagon.h"
#include <FastLED.h>

Draw::Draw(int x=0){
    
}


    //void circle_3_expanding(Hexagon::Hexagon hex, int hue);

    void Draw::fill_hexagon(Hexagon hex, struct CRGB * leds, const struct CRGB& color){
    //loops thru each led in the hexagon and sets  the color
    for(int i=hex.hex_Start_Led; i<hex.hex_End_Led;i++)
    //Serial.println(hex_Start_Led);
    {
        leds[i]=color;
    }
}







