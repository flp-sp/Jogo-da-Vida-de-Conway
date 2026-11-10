#ifndef UNIVERSE_H
#define UNIVERSE_H

#include "cell.h"

typedef struct Universe{
    Cell *liveCells;
    long count;

} Universe;

Universe universe;

void createSeed(Cell* positions);

int checkLiveCellPosition(long posX, long posY);

int checkAllCells(long posX, long posY);

void removeCell(Cell cell);

void addCell(Cell cell);

#endif