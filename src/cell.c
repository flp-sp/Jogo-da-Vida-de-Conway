#include "../conway/cell.h"
#include "../conway/universe.h"

Cell initCell(long posX, long posY){
    Cell newCell = {1, posX, posY};
    return newCell;
}

int countNeighbours(Cell *cell){
    int totalNeighbours = 0;
    //horizontal
    if(checkCellPosition(cell->posX + 1, cell->posY)){
        totalNeighbours++;
    }

    if(checkCellPosition(cell->posX - 1, cell->posY)){
        totalNeighbours++;
    }

    //vertical
    if(checkCellPosition(cell->posX, cell->posY + 1)){
        totalNeighbours++;
    }

    if(checkCellPosition(cell->posX, cell->posY - 1)){
        totalNeighbours++;
    }

    //diagonal
    if(checkCellPosition(cell->posX + 1, cell->posY + 1)){
        totalNeighbours++;
    }

    if(checkCellPosition(cell->posX + 1, cell->posY - 1)){
        totalNeighbours++;
    }

    if(checkCellPosition(cell->posX - 1, cell->posY - 1)){
        totalNeighbours++;
    }

    if(checkCellPosition(cell->posX - 1, cell->posY + 1)){
        totalNeighbours++;
    }

    return totalNeighbours;
}