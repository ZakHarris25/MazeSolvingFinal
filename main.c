#include "header.h"

/*TODO
 * read csv to ints
 * store value of csv in array of structs
 * using array of structs find possible path (MANUALLY)
 * create A* using manhattan pathing EUCLID CAN SMD
 * functions needed:
 * Read and parse csv
 * a*
 *
 *
 * */


struct Tile {
    int east;
    int west;
    int north;
    int south;
};

int main() {
    struct Tile tiles[6][8]={
            {{},{},{},{},{},{},{},{}},
            {{},{},{},{},{},{},{},{}},
            {{},{},{},{},{},{},{},{}},
            {{},{},{},{},{},{},{},{}},
            {{},{},{},{},{},{},{},{}},
            {{},{},{},{},{},{},{},{}}
    };

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 7; ++j) {
            printf("%i", tiles[i][j].east);
        }
    }
    csvExtract();

    return 0;
}

int csvExtract(){
    char fileLine[16];
    const char check[5] = ",()\"";
    char *token;

    FILE *fp;
    //opening file and giving error if unavailable
    fp = fopen("C:\\Users\\Zak\\Documents\\GitHub\\MazeSolvingFinal\\mazeOne.csv", "r");
    if(fp == NULL)
    {
        perror("Error opening file");
        return(-1);
    }

    //checking if fgets results in NULL - returning error
    if(fgets(fileLine, 24, fp) == NULL)
    {
        perror("ERROR");
        return(-1);
    }
    else
    {
        puts(fileLine);
    }


    token = strtok(fileLine, check);
    for (int i = 0; i < 5; ++i)
    {
        while (token != NULL)
        {
            printf(" %s\n", token);
            token = strtok(NULL, check);
        }
    }
    return(-1);
};

