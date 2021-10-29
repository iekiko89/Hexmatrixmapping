#include "hextile.h"
#include <FastLED.h>

Hexagon::Hexagon(int qin=0, int rin=0, int hex_Numberin=10){
    q=qin;
    r=rin;
    hex_Number=hex_Numberin;
    //definining the first led of the hexagon and the last led of the hexagon
    //first led index for hexagon
    hex_Start_Led=(hex_Number-1)*leds_per_hexagon;
    //last led index for hexagon is hex_End_Led-1
    hex_End_Led=hex_Start_Led+leds_per_hexagon;
 
    
}
//creating a class function to a hexagon
void Hexagon::fill_hexagon(struct CRGB * leds, const struct CRGB& color){
    //loops thru each led in the hexagon and sets  the color

    for(int i=hex_Start_Led; i<hex_End_Led;i++)
    //Serial.println(hex_Start_Led);
    {
        Serial.println(i);
        leds[i]=color;
        
    }
    



}