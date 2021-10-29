#ifndef HEXTILE_H
#define HEXTILE_H

//Initialize function
class Hexagon{
    private:
        //q (column), r(row) is the hexagon position first hexagon is always 0,0
    public:
        Hexagon(int q, int r,int hex_Number);
        void fill_hexagon(struct CRGB * leds, const struct CRGB& color);
        //these below will need to go back to private
        int hex_Start_Led;
        int hex_End_Led;
        const int leds_per_hexagon=96;
             
};
#endif