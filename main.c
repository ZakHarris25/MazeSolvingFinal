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
    char east;
    char west;
    char south;
    char north;
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
    csvExtract(1);
    for (int l = 0; l < 4; ++l) {
        switch (l) {
            case 0:
                for (int i = 0; i < 6; ++i)
                {
                    for (int j = 0; j < 8; ++j)
                    {
                        tiles[i][j].east = csvExtract(l);
                        printf("EAST at %i,%i: %c\n ", i, j, tiles[i][j].east);
                    }
                }
                break;
            case 1:
                for (int i = 0; i < 5; ++i)
                {
                    for (int j = 0; j < 7; ++j)
                    {
                        tiles[i][j].west = csvExtract(l);
                        printf("WEST at %i,%i: %c\n",i, j, tiles[i][j].west);
                    }
                }
                break;
            case 2:
                for (int i = 0; i < 5; ++i)
                {
                    for (int j = 0; j < 7; ++j)
                    {
                        tiles[i][j].south = csvExtract(l);
                        printf("SOUTH: %c\n", tiles[i][j].south);
                    }
                }
                break;
            case 3:
                for (int i = 0; i < 5; ++i)
                {
                    for (int j = 0; j < 7; ++j)
                    {
                        tiles[i][j].north = csvExtract(l);
                        printf("NORTH: %c\n", tiles[i][j].north);
                    }
                }
                break;
            default:
                perror("Main Switch error");

        }
    }
    return 0;
}



char csvExtract(int c){
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
    }else
    {
        puts(fileLine);
    }

    while( token != NULL ) {

        token = strtok(NULL, check);

        switch (c) {
            case 0:
                for (int i = 0; i < 6; ++i)
                {
                    if(i==2)
                    {
                        return(token[i]);
                    }else
                        token = strtok(NULL, check);
                }
                break;
            case 1:
                for (int i = 0; i < 6; ++i)
                {
                    if(i==3)
                    {
                        return(token[i]);
                    }else
                        token = strtok(NULL, check);
                }
                break;
            case 2:
                for (int i = 0; i < 6; ++i)
                {
                    if(i==4)
                    {
                        return(token[i]);
                    }else
                        token = strtok(NULL, check);
                }
                break;
            case 3:
                for (int i = 0; i < 6; ++i)
                {
                    if(i==5)
                    {
                        return(token[i]);
                    }else
                        token = strtok(NULL, check);
                }
                break;
            default:
                perror("switch error: ");
                printf("c = %i", c);
                break;

        }
    }
    for (int i = 0; i < 5; ++i)
    {
        if(i==2)
        {
            return(token[i]);
        }else {
            token = strtok(NULL, check);
        }
    }
    return(-1);
};

