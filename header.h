//
// Created by Zak on 26/03/2024.
//

#ifndef MAZESOLVINGFINAL_HEADER_H
#define MAZESOLVINGFINAL_HEADER_H

#endif //MAZESOLVINGFINAL_HEADER_H



#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int start[2] = {1, 1};
int end[2] = {6,8};

int *gValues;
int *hValues;

struct Tile {
    int pos[2];
    char east;
    char west;
    char south;
    char north;

    int f;
    int g;
    int h;
};

int* gCalc(int x, int y);
int* hCalc(int x, int y);


struct Move{
    bool right;
    bool left;
    bool down;
    bool up;
};