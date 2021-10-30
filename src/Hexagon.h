#ifndef Hexagon_H
#define Hexagon_H

//Initialize function
class Hexagon{
    private:
        //q (column), r(row) is the hexagon position first hexagon is always 0,0
        //these are hexagon specific
        int hex_Start_Led;
        int hex_End_Led;
        int q;
        int r;
        int hex_Number;
        //the are the range for the hexagons calculated from q (hex column position)
        //and delta x, y. which depends of if the column is even or odd.
        //https://www.redblobgames.com/grids/hexagons/
        //i chose odd q, prefered for the hexagons to be to the right and down
        
        int Xmin;
        int Xmax;
        int Ymin;
        int Ymax;
        
        //these are hexagon "global" same for all hexagons used 
        static int total_Hexagons;
        static int total_Leds;
        static int hex_S_P;
        //these are "global const" same for all hexagons regardless
        // of the amount and location
        static const int hexagon_Width=15;
        static const int hexagon_Height=8;
        static const int leds_per_hexagon=96;
        //number of leds per hexagon displacement q_even, q_odd
        int dx_q=12;
        int dy_q=8;
        //number of leds per hex displacement odd
    public:
        Hexagon(int qin, int rin,int hex_Numberin, int total_Hexagonsin);
        //void fill will like move to a different class
        void fill_hexagon(struct CRGB * leds, const struct CRGB& color);
        //returns the led at the x,y position if it exists
        int XY_Hex_Map(int x, int y);
        void XY_Range();

             
};
#endif