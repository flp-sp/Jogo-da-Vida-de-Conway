#ifndef UNIVERSE_H
#define UNIVERSE_H

#include "cell.h"

typedef struct Universe{
    Cell *liveCells;
    long count;

} Universe;

int checkCellPosition(long posX, long posY);

#endif