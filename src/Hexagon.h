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
        int XY_local[96];
        //the are the range for the hexagons calculated from q (hex column position)
        //and delta x, y. which depends of if the column is even or odd.
        //https://www.redblobgames.com/grids/hexagons/
        //i chose odd q, prefered for the hexagons to be to the right and down
        
        int Xmin;
        int Xmax;
        int Ymin;
        int Ymax;
        
        //these are hexagon "global" same for all hexagons used 
        int total_Hexagons;
        int total_Leds;
        int hex_S_P;
        //these are "global const" same for all hexagons regardless
        // of the amount and location
        static const int hexagon_Width=15;
        static const int hexagon_Height=8;
        static const int leds_per_hexagon=96;
        /*
        static  int hex_Led_Xarr[96]={3, 4, 5, 6, 7, 8, 9, 10, 11, 2, 3, 4, 5, 6, 7, 8,
         9, 10, 11, 12, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 0, 1, 2, 3, 4, 5, 6, 7, 8, 
         9, 10, 11, 12, 13, 14, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 1, 2, 3, 4,
         5, 6, 7, 8, 9, 10, 11, 12, 13, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 3, 4, 5, 6, 7, 8,
         9, 10, 11};
        static const int hex_Led_Yarr[96]={0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1,1, 
        1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
        3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 
        5, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 7, 7, 7, 7, 7, 7, 7, 7, 7};
        */
        //number of leds per hexagon displacement q_even, q_odd
        int dx_q=12;
        int dy_q=8;
        //number of leds per hex displacement odd
    public:
        friend class Draw;

        Hexagon(int qin, int rin,int hex_Numberin, int total_Hexagonsin);
        //void fill will like move to a different class
        //void fill_hexagon(struct CRGB * leds, const struct CRGB& color);
        //returns the led at the x,y position if it exists
        int XY_Hex_Map(int x, int y);
        //void XY_Range();
        

             
};
#endif