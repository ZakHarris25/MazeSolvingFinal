////
//// Created by Zak on 26/03/2024.
////



#include "stdio.h"
#include "stdbool.h"

#define ROWS 8
#define COLS 10

int startEndCO[4];
int movelist[64][2] = {0};
int currentPos[2];
int moveOptions[4];

int lastMove;
int c = 0;

void findSE();
void startUp();
int validMove();
void changePos();
//#ifndef MAZESOLVINGFINAL_HEADER_H
//#define MAZESOLVINGFINAL_HEADER_H
//
//#endif //MAZESOLVINGFINAL_HEADER_H
//
//
//
//#include <stdio.h>
//#include <string.h>
//#include <stdbool.h>
//
//int start[2] = {1, 1};
//int end[2] = {6,8};
//
//int *gValues;
//int *hValues;
//
//struct Tile {
//    int pos[2];
//    char east;
//    char west;
//    char south;
//    char north;
//
//    int f;
//    int g;
//    int h;
//};
//
//int* gCalc(int x, int y);
//int* hCalc(int x, int y);
//
//
//struct Move{
//    bool right;
//    bool left;
//    bool down;
//    bool up;
//};