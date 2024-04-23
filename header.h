////
//// Created by Zak on 26/03/2024.
////

#ifndef MAZESOLVINGFINAL_HEADER_H
#define MAZESOLVINGFINAL_HEADER_H

#endif //MAZESOLVINGFINAL_HEADER_H

#include "stdio.h"
int maze1[6][8] = { // maze initialisation 1 represents walls, 2 represents the start point, 3 represents the end and 0 represents open passages
        {2, 1, 0, 0, 0, 1, 0, 0},
        {0, 1, 0, 1, 0, 1, 1, 1},
        {0, 0, 0, 1, 0, 0, 0, 0},
        {1, 0, 1, 1, 1, 0, 1, 0},
        {1, 0, 1, 0, 1, 0, 1, 0},
        {0, 0, 0, 0, 1, 0, 1, 3},
};
int startEndCO[4];
int currentPos[2];
int moveOptions[4];
int lastMove = -2;
int winCon();
void findSE();
void startUp();
void checkDist();
void bestMove();