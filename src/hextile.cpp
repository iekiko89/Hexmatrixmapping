#include "hextile.h"
#include <FastLED.h>

Hexagon::Hexagon(int q, int r, int hex_Number){
    //definining the first led of the hexagon and the last led of the hexagon
    static int hex_Start_Led=(hex_Number-1)*leds_per_hexagon;
    static int hex_End_Led=(hex_Number)*leds_per_hexagon;
}
//creating a class function to a hexagon
void Hexagon::fill_hexagon(struct CRGB * leds, const struct CRGB& color){
    //loops thru each led in the hexagon and sets  the color
    //for(i = Hexagon.hex_Start_Led;i< hex_End_Led;i++)
    leds[0]=color;
    leds[1]=color;
    leds[2]=color;
    leds[3]=color;
    leds[4]=color;
    leds[5]=color;
    leds[6]=color;
    leds[7]=color;
    leds[8]=color;



}