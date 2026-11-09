#ifndef UNIVERSE_H
#define UNIVERSE_H

#include "cell.h"

typedef struct Universe{
    Cell *liveCells;
    long count;

} Universe;

void createSeed(Cell* positions);

int checkCellPosition(long posX, long posY);

#endif