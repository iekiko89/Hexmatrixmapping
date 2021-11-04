
#ifndef Draw_H
#define Draw_H
#include "Hexagon.h"


//Initialize function
class Draw{

    private:
    int circle_3_offset=1;

    public:
        Draw(int x);
        void circle_3_expanding(Hexagon hex, struct CRGB * leds, const struct CRGB& color);

        void fill_hexagon(Hexagon hex, struct CRGB * leds, const struct CRGB& color);








};
#endif