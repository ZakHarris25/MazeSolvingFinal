#include "header.h"

/*TODO
 * read csv to ints
 * store value of csv in array of structs
 * using array of structs find possible path (MANUALLY)
 * create A* using manhattan pathing EUCLID CAN SMD
 * functions needed:
 * reading csv can fuck itself{
 *          Read and parse csv
 * }
 * a*
 *
 *
 * */

//STARTING tile [5][0]
/*
 * east true
 * west OUTSIDE WALL
 * north FALSE
 * south OUTSIDE WALL
 * opening facing up
 *
 */
struct Tile {
    char east;
    char west;
    char south;
    char north;
};

struct Move{
    bool right;
    bool left;
    bool down;
    bool up;
};

int main() {
    struct Tile tiles[6][8]={
            {{.east = 0, .west = 0, .south =0, .north= 1},{.east = 1, .west = 0, .south =0, .north= 1},{.east = 1, .west = 1, .south =0, .north= 0},{.east = 0, .west = 1, .south =0, .north= 1},{.east = 1, .west = 0, .south =0, .north= 1},{.east = 1, .west = 1, .south =0, .north= 0},{.east = 1, .west = 1, .south =0, .north= 0},{.east = 0, .west = 1, .south =0, .north= 1}},
            {{.east = 1, .west = 0, .south =1, .north= 0},{.east = 0, .west = 1, .south =1, .north= 0},{.east = 1, .west = 0, .south =0, .north= 1},{.east = 0, .west = 1, .south =1, .north= 0},{.east = 1, .west = 0, .south =1, .north= 0},{.east = 1, .west = 1, .south =0, .north= 0},{.east = 0, .west = 1, .south =0, .north= 0},{.east = 0, .west = 0, .south =1, .north= 1}},
            {{.east = 1, .west = 0, .south =0, .north= 1},{.east = 0, .west = 1, .south =0, .north= 0},{.east = 0, .west = 0, .south =1, .north= 1},{.east = 1, .west = 0, .south =0, .north= 1},{.east = 1, .west = 1, .south =0, .north= 0},{.east = 0, .west = 1, .south =0, .north= 1},{.east = 1, .west = 0, .south =0, .north= 1},{.east = 0, .west = 1, .south =1, .north= 1}},
            {{.east = 0, .west = 0, .south =1, .north= 1},{.east = 1, .west = 0, .south =0, .north= 1},{.east = 0, .west = 1, .south =1, .north= 0},{.east = 1, .west = 0, .south =1, .north= 0},{.east = 0, .west = 1, .south =0, .north= 1},{.east = 1, .west = 0, .south =1, .north= 0},{.east = 0, .west = 1, .south =1, .north= 0},{.east = 0, .west = 0, .south =1, .north= 1}},
            {{.east = 1, .west = 0, .south =1, .north= 1},{.east = 0, .west = 1, .south =1, .north= 0},{.east = 1, .west = 0, .south =0, .north= 1},{.east = 1, .west = 1, .south =0, .north= 0},{.east = 0, .west = 1, .south =1, .north= 0},{.east = 1, .west = 0, .south =0, .north= 1},{.east = 0, .west = 1, .south =0, .north= 1},{.east = 0, .west = 0, .south =1, .north= 1}},
            {{.east = 1, .west = 0, .south =1, .north= 0},{.east = 1, .west = 1, .south =0, .north= 0},{.east = 0, .west = 1, .south =1, .north= 0},{.east = 1, .west = 0, .south =0, .north= 0},{.east = 1, .west = 1, .south =0, .north= 0},{.east = 0, .west = 1, .south =1, .north= 0},{.east = 1, .west = 0, .south =1, .north= 0},{.east = 0, .west = 1, .south =1, .north= 0}}
    };


    return 0;
}


 struct Move aStar(){

};