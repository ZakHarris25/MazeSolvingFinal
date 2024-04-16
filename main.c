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

// Define maze elements
#define WALL '#'
#define PASSAGE ' '
#define START 'S'
#define EXIT 'E'





int maze1[ROWS][COLS] = {
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 2, 1, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 1, 0, 1, 0, 1, 1, 1, 1},
        {1, 0, 0, 0, 1, 0, 0, 0, 0, 1},
        {1, 1, 0, 1, 1, 1, 0, 1, 0, 1},
        {1, 1, 0, 1, 0, 1, 0, 1, 0, 1},
        {1, 0, 0, 0, 0, 1, 0, 1, 3, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
};



int main(){
    findSE();
    startUp();
    for (int i = 0; i < 15; ++i) {
        changePos();
        ++c;
    }


//    for (int i = 0; i < 4; ++i) {//prints coordinated of start and end points
//        if(i == 2){
//            printf("\n");
//        }
//        printf("%i, ", startEndCO[i]);
//    }
    return 0;
}




void findSE(){//function to find the start and end points of the maze
    for (int i = 0; i < 7; ++i) {
        for (int j = 0; j < 9; ++j) {
            switch (maze1[i][j]){
                case 2:
                    startEndCO[0] = i;
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

void startUp(){
    currentPos[0] = startEndCO[0];
    currentPos[1] = startEndCO[1];
    printf("Current POSITION: %i,%i\n", currentPos[0], currentPos[1]);
    printf("start POSITION: %i , %i\n", startEndCO[0], startEndCO[1]);
    printf("end POSITION: %i,%i\n", startEndCO[2], startEndCO[3]);

}


int validMove(){//checks possible valid moves returns 1-4 based on direction of available move
    for (int i = 1; i < 5; ++i) {
        switch (i) {
            case 1:
                if(maze1[currentPos[0]][currentPos[1]+1]  != 1 && lastMove != 2){
                    printf("\nRight is valid: ");
                    lastMove = 1;
                    moveOptions[0] = 1;
                }
                break;
            case 2:
                if(maze1[currentPos[0]][currentPos[1]-1]  != 1 && lastMove != 1){
                    printf("\nLeft is valid: ");
                    lastMove = 2;
                    moveOptions[1] = 1;
                }
                break;
            case 3:
                if(maze1[currentPos[0]-1][currentPos[1]]  != 1 && lastMove !=4){
                    printf("\nUp is valid: ");
                    lastMove = 3;
                    moveOptions[2] = 1;
                }
                break;
                case 4:
                    if(maze1[currentPos[0]+1][currentPos[1]]  != 1 && lastMove != 3){
                    printf("\nDown is valid: ");
                    lastMove = 4;
                    moveOptions[3] = 1;
                }
                break;
            default:
                perror("Switch Failure in ValidMove function");
                return 0;
                break;
        }
    }
    return 0;
}

void changePos(){
    for (int i = 0; i < 4; ++i) {
        if(moveOptions[0] == 1){
            currentPos[1] += 1;
            movelist[c][0] = currentPos[0];
            movelist[c][1] = currentPos[1];
        }else if(moveOptions[1] == 1){
            currentPos[1] += 1;
            movelist[c][0] = currentPos[0];
            movelist[c][1] = currentPos[1];
        }else if(moveOptions[2] == 1){
            currentPos[0] -= 1;
            movelist[c][0] = currentPos[0];
            movelist[c][1] = currentPos[1];
        }else{
            currentPos[0] += 1;
            movelist[c][0] = currentPos[0];
            movelist[c][1] = currentPos[1];
        }
    }
        printf("%i, %i", currentPos[0], currentPos[1]);
}