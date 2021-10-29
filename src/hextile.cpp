#include "hextile.h"
#include <FastLED.h>

Hexagon::Hexagon(int q=0, int r=0, int hex_Number=1){
    //definining the first led of the hexagon and the last led of the hexagon
    static int hex_Start_Led=(hex_Number-1)*leds_per_hexagon;
    static int hex_End_Led=(hex_Number)*leds_per_hexagon;
}
//creating a class function to a hexagon
void Hexagon::fill_hexagon(struct CRGB * leds, const struct CRGB& color){
    //loops thru each led in the hexagon and sets  the color
    //for(i = Hexagon.hex_Start_Led;i< hex_End_Led;i++)
    for(int i=Hexagon::hex_Start_Led; i<leds_per_hexagon;i++)
    {
        leds[i]=color;
        
    }
    leds[Hexagon::hex_Start_Led]=CRGB(0,0,255);



}