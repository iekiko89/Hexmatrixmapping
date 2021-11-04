#include "Draw.h"
#include "Hexagon.h"
#include <FastLED.h>

Draw::Draw(int x=0){

}


    

    void Draw::fill_hexagon(Hexagon hex, struct CRGB * leds, const struct CRGB& color){
    //loops thru each led in the hexagon and sets  the color
    for(int i=hex.hex_Start_Led; i<hex.hex_End_Led;i++)
    //Serial.println(hex_Start_Led);
    {
        leds[i]=color;
    } 
    }

    void Draw::circle_3_expanding(Hexagon hex, struct CRGB * leds, const struct CRGB& color){
        //start here
        // center
        uint8_t cx = hex.hexagon_Width / 2;
        uint8_t cy = hex.hexagon_Height / 2;
        // wave width
        uint8_t w = 1;

          EVERY_N_MILLISECONDS(0) {
             circle_3_offset += 1;
             }
         for (int x = 0; x < hex.hexagon_Width; x++) {
             for (int y = 0; y < hex.hexagon_Height; y++) {
      
                 uint8_t value = 127.5 + 127.5 * sin(w * (circle_3_offset + sqrt((x - cx) * (x - cx) + (y - cy) * (y - cy))));
      
                 uint16_t index = hex.XY_Hex_Map(x, y);
                leds[index] = CHSV(100, 255, value);
                }
            }
    }







