#include "../conway/universe.h"
#include "../conway/cell.h"

Universe universe;

void createSeed(Cell* positions){
    universe.liveCells = positions;
    universe.count = 5;
}

int checkCellPosition(long posX, long posY){
    for(int i = 0; i < universe.count; i++){
        if(universe.liveCells[i].posX == posX && universe.liveCells[i].posY == posY){
            return 1;
        }
    }
    return 0;
}