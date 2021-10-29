#include "hextile.h"
#include <FastLED.h>

Hexagon::Hexagon(int q=0, int r=0, int hex_Number=10){
    
    //definining the first led of the hexagon and the last led of the hexagon
    //Serial.println(hex_Number);
    //Serial.println(q);
    //Serial.println(r);
    int hex_Start_Led=(hex_Number-1)*leds_per_hexagon;
    int hex_End_Led=(hex_Number)*leds_per_hexagon;
    Serial.println(hex_End_Led);
    Serial.println(hex_Start_Led);
    
}
//creating a class function to a hexagon
void Hexagon::fill_hexagon(struct CRGB * leds, const struct CRGB& color){
    //loops thru each led in the hexagon and sets  the color

    for(int i=hex_Start_Led; i<leds_per_hexagon;i++)
    //Serial.println(hex_Start_Led);
    {
        //Serial.println(i);
        leds[i]=color;
        
    }
    



}