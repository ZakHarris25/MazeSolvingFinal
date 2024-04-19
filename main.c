#include "header.h"

int main(){
    findSE();
    startUp();
    while(winCon() == false){
        checkDist();
    }
}

void findSE(){//function to find the start and end points of the maze
    for (int i = 0; i < 6; ++i) {               //iterates through and saves the start and end points in one array
        for (int j = 0; j < 8; ++j) {
            switch (maze1[i][j]){
                case 2:
                    startEndCO[0] = i;          //the coordinates are accessed based off (ROWS, COLUMNS) as apposed to x,y to avoid confusion
                    startEndCO[1] = j;
                    break;
                case 3:
                    startEndCO[2] = i;
                    startEndCO[3] = j;
                    break;
                default:
                    break;
            }
        }
    }
}

void startUp(){ // gives output to the user and sets the current position
    currentPos[0] = startEndCO[0];
    currentPos[1] = startEndCO[1];
    printf("Current POSITION: %i, %i\n", currentPos[0], currentPos[1]);
    printf("Start POSITION: %i, %i\n", startEndCO[0], startEndCO[1]);
    printf("End POSITION: %i, %i\n", startEndCO[2], startEndCO[3]);

}

void checkDist() { // function to find the direction the "mouse" can travel for the longest distance
    for (int i = 0; i < 4; ++i) {//clears the moveOptions array - was having problems with using both global and local variables so this was a fool proof way of clearing values
        moveOptions[i] = 0;
    }
    for (int i = 1; i < 6; ++i) {//checks whether there is a wall, whether it will be out of bounds and if the last move was the opposite to avoid being trapped in LR or UD loop
        if(maze1[currentPos[0]+i][currentPos[1]] != 1 && currentPos[0]+i < 5 && lastMove != 1){
          moveOptions[0]++;//DOWN
        }else{
            break;
        }
    }
    for (int i = 0; i < 6; ++i) {
        if(maze1[currentPos[0]-i][currentPos[1]] != 1 && currentPos[0]-i > 0 && lastMove != 0){
            moveOptions[1]++;//UP
        }else{
            break;
        }
    }
    for (int i = 1; i < 8; ++i) {
        if(maze1[currentPos[0]][currentPos[1]+i] != 1 && currentPos[1]+i <8 && lastMove != 3){
            moveOptions[2]++;//RIGHT
        }
        else{
            break;
        }
    }
    for (int i = 0; i < 8; ++i) {
        if(maze1[currentPos[0]][currentPos[1]-i] != 1 && currentPos[1]-i > 0 && lastMove != 2){
            moveOptions[3]++;//LEFT
        }
        else{
            break;
        }
    }
    bestMove();
}

void bestMove(){
    int largest = -1;
    for (int i = 0; i < 4; i++) {
        if (moveOptions[i] > largest) { // finds the largest of the 4 directions available
            largest = i;
        }
    }
    switch (largest) { //switch according to the direction that can be followed the furthest. Moves "Mouse" accordingly
        case 0:
            printf("\nDOWN\n");
            currentPos[0] += moveOptions[0];//DOWN
            lastMove = 0;
            printf("\nCURRENT POSITION: %i, %i\n", currentPos[0], currentPos[1]);

            break;
        case 1:
            printf("\nUP\n");
            currentPos[0] -= moveOptions[1];//UP
            lastMove = 1;
            printf("\nCURRENT POSITION: %i, %i\n", currentPos[0], currentPos[1]);
            break;
        case 2:
            printf("\nRIGHT\n");
            currentPos[1] += moveOptions[2];//RIGHT
            lastMove = 2;

            printf("\nCURRENT POSITION: %i, %i\n", currentPos[0], currentPos[1]);
            break;
        case 3:
            printf("\nLEFT\n");
            currentPos[1] -= moveOptions[3];//LEFT
            lastMove = 3;

            printf("\nCURRENT POSITION: %i, %i\n", currentPos[0], currentPos[1]);
            break;
        default:
            perror("\nSHITS FUCKED MOVEDIRECTION SWITCH\n");
            break;
    }
};

bool winCon(){//checks whether the mouse is 1 off the end tile to signal that it has finished the maze
    if(maze1[currentPos[0]-1][currentPos[1]] == 3 || maze1[currentPos[0]+1][currentPos[1]] == 3 || maze1[currentPos[0]][currentPos[1]+1] == 3 || maze1[currentPos[0]+1][currentPos[1]-1] == 3){
        printf("\nMaze completed");
        return true;
    }else{
        return false;
    }
}