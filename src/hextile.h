#ifndef HEXTILE_H
#define HEXTILE_H

//Initialize function
class Hexagon{
    private:
        const int leds_per_hexagon=96;
        int hex_Start_Led;
        int hex_End_Led;
        //q (column), r(row) is the hexagon position first hexagon is always 0,0
    public:
        Hexagon(int q, int r,int hex_Number );
        void fill_hexagon(struct CRGB * leds, const struct CRGB& color);
        
};


#endif