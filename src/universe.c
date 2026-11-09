#include "../conway/universe.h"
#include "../conway/cell.h"


Cell positions[] = {{7,6}, {8,7}, {6,8}, {7,8}, {8,8}};

Universe universe = {positions, 5};

int checkCellPosition(long posX, long posY){
    for(int i = 0; i < universe.count; i++){
        if(universe.liveCells[i].posX == posX && universe.liveCells[i].posY == posY){
            return 1;
        }
    }
    return 0;
}