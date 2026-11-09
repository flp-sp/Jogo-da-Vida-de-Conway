#ifndef CELL_H
#define CELL_H

typedef struct Cell{
    long posX;
    long posY;
} Cell;

int countNeighbours(Cell*);

Cell initCell(long posX, long posY);

#endif