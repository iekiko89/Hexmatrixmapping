#ifndef HEXTILE_H
#define HEXTILE_H

//Initialize function
class Hexagon{
    private:
        //q (column), r(row) is the hexagon position first hexagon is always 0,0
        int hex_Start_Led;
        int hex_End_Led;
        const int leds_per_hexagon=96;
        int hex_Number;
        int q;
        int r;
    public:
        Hexagon(int qin, int rin,int hex_Numberin);
        void fill_hexagon(struct CRGB * leds, const struct CRGB& color);
        //these below will need to go back to private

             
};
#endif