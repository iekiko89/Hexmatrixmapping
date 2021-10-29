#include "hextile.h"
#include <FastLED.h>

Hexagon::Hexagon(int q, int r, int hex_Number){
    //definining the first led of the hexagon and the last led of the hexagon
    int hex_Start_Led=(hex_Number-1)*leds_per_hexagon;
    int hex_End_Led=(hex_Number)*leds_per_hexagon;
}
//creating a class function to a hexagon
void fill_hexagon(CRGB leds, int hex_Number, CRGB color){
    //loops thru each led in the hexagon and sets  the color
    for(i = Hexagon::hex_Start_Led;i<Hexagon::hex_End_Led;i++)
    {
        leds[i]=color;
    }

}