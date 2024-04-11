#include "header.h"

/*TODO
 * read csv to ints                                     /
 * store value of csv in array of structs               /
 * using array of structs find possible path (MANUALLY)
 * create A* using manhattan pathing EUCLID CAN SMD
 * functions needed:
 * reading csv can fuck itself{                         /
 *          Read and parse csv
 * }
 * a*
 * create two queues/lists
 * open list is set of nodes that need to be evaluated
 * closed is a set of nodes that have already been evaluated
 * add start node to open
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

int main() {
    int openList[48];
    int closedList[48];

    struct Tile tiles[6][8]={
            {{.east = 0, .west = 0, .south =0, .north= 1},{.east = 1, .west = 0, .south =0, .north= 1},{.east = 1, .west = 1, .south =0, .north= 0},{.east = 0, .west = 1, .south =0, .north= 1},{.east = 1, .west = 0, .south =0, .north= 1},{.east = 1, .west = 1, .south =0, .north= 0},{.east = 1, .west = 1, .south =0, .north= 0},{.east = 0, .west = 1, .south =0, .north= 1}},
            {{.east = 1, .west = 0, .south =1, .north= 0},{.east = 0, .west = 1, .south =1, .north= 0},{.east = 1, .west = 0, .south =0, .north= 1},{.east = 0, .west = 1, .south =1, .north= 0},{.east = 1, .west = 0, .south =1, .north= 0},{.east = 1, .west = 1, .south =0, .north= 0},{.east = 0, .west = 1, .south =0, .north= 0},{.east = 0, .west = 0, .south =1, .north= 1}},
            {{.east = 1, .west = 0, .south =0, .north= 1},{.east = 0, .west = 1, .south =0, .north= 0},{.east = 0, .west = 0, .south =1, .north= 1},{.east = 1, .west = 0, .south =0, .north= 1},{.east = 1, .west = 1, .south =0, .north= 0},{.east = 0, .west = 1, .south =0, .north= 1},{.east = 1, .west = 0, .south =0, .north= 1},{.east = 0, .west = 1, .south =1, .north= 1}},
            {{.east = 0, .west = 0, .south =1, .north= 1},{.east = 1, .west = 0, .south =0, .north= 1},{.east = 0, .west = 1, .south =1, .north= 0},{.east = 1, .west = 0, .south =1, .north= 0},{.east = 0, .west = 1, .south =0, .north= 1},{.east = 1, .west = 0, .south =1, .north= 0},{.east = 0, .west = 1, .south =1, .north= 0},{.east = 0, .west = 0, .south =1, .north= 1}},
            {{.east = 1, .west = 0, .south =1, .north= 1},{.east = 0, .west = 1, .south =1, .north= 0},{.east = 1, .west = 0, .south =0, .north= 1},{.east = 1, .west = 1, .south =0, .north= 0},{.east = 0, .west = 1, .south =1, .north= 0},{.east = 1, .west = 0, .south =0, .north= 1},{.east = 0, .west = 1, .south =0, .north= 1},{.east = 0, .west = 0, .south =1, .north= 1}},
            {{.east = 1, .west = 0, .south =1, .north= 0},{.east = 1, .west = 1, .south =0, .north= 0},{.east = 0, .west = 1, .south =1, .north= 0},{.east = 1, .west = 0, .south =0, .north= 0},{.east = 1, .west = 1, .south =0, .north= 0},{.east = 0, .west = 1, .south =1, .north= 0},{.east = 1, .west = 0, .south =1, .north= 0},{.east = 0, .west = 1, .south =1, .north= 0}}
    };


    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 8; ++j) {


        }
    }
    return  0;
}

int *gCalc(int x, int y){
    *gValues = start[0] - x;
    if (start[0] > x){
        *gValues = start[0] - x;
        printf("t");
        return(gValues);
    }else{
        *gValues = x - start[0];
        printf("t");
        return(gValues);
    }
}