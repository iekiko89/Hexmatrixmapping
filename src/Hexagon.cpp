#include "Hexagon.h"
#include <FastLED.h>

Hexagon::Hexagon(int qin=0, int rin=0, int hex_Numberin=0, int total_Hexagonsin=0){
    q=qin;
    r=rin;
    hex_Number=hex_Numberin;
    total_Hexagons=total_Hexagonsin;
    //definining the first led of the hexagon and the last led of the hexagon
    //first led index for hexagon
    hex_Start_Led=(hex_Number-1)*leds_per_hexagon;
    //last led index for hexagon is hex_End_Led-1
    hex_End_Led=hex_Start_Led+leds_per_hexagon;
    total_Leds=96*total_Hexagons;
    //q is even then then are the x and y delta can be used to set x, y span for even q
    if(q%2==0){Xmin=dx_q*q;Ymin=dy_q*r;}
    else{Xmin=dx_q*q; Ymin=dy_q*r+4;}
    Xmax=Xmin+hexagon_Width;
    Ymax=Ymin+hexagon_Height;

    //hexaqgon safety pixel:hex_SP
    hex_S_P=total_Leds+1;

}
//creating a class function to a hexagon
void Hexagon::fill_hexagon(struct CRGB * leds, const struct CRGB& color){
    //loops thru each led in the hexagon and sets  the color
    for(int i=hex_Start_Led; i<hex_End_Led;i++)
    //Serial.println(hex_Start_Led);
    {
        leds[i]=color;
    }
}
int Hexagon::XY_Hex_Map(int x=0, int y=0){

    // need to figure this issue out later
  // any out of bounds address maps to the first hidden pixel
  //if ( (x >= kMatrixWidth) || (y >= kMatrixHeight) ) {
  //  return (LAST_VISIBLE_LED + 1);
  //}

  const int XYTable[] = {
    hex_S_P,  hex_S_P,  hex_S_P,   0,   1,   2,   3,   4,   5,   6,   7,   8,  hex_S_P, hex_S_P, hex_S_P,
   hex_S_P, hex_S_P,   9,  10,  11,  12,  13,  14,  15,  16,  17,  18,  19, hex_S_P, hex_S_P,
   hex_S_P,  20,  21,  22,  23,  24,  25,  26,  27,  28,  29,  30,  31,  32, hex_S_P,
    33,  34,  35,  36,  37,  38,  39,  40,  41,  42,  43,  44,  45,  46,  47,
    48,  49,  50,  51,  52,  53,  54,  55,  56,  57,  58,  59,  60,  61,  62,
   hex_S_P,  63,  64,  65,  66,  67,  68,  69,  70,  71,  72,  73,  74,  75, hex_S_P,
   hex_S_P, hex_S_P,  76,  77,  78,  79,  80,  81,  82,  83,  84,  85,  86, hex_S_P, hex_S_P,
   hex_S_P, hex_S_P, hex_S_P,  87,  88,  89,  90,  91,  92,  93,  94,  95, hex_S_P, hex_S_P, hex_S_P
  };

  uint16_t i = (y * hexagon_Width)+x;  //kMatrixWidth) + x;
  uint16_t j = XYTable[i];

  return j;
}
//void Hexagon::XY_Range

