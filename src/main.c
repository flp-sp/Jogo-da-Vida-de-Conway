#include "../conway/cell.h"
#include "../conway/universe.h"

#include <stdio.h>

int main(){
    Cell positions[] = {{7,6}, {8,7}, {6,8}, {7,8}, {8,8}};
    createSeed(positions);

    Cell celulaTeste = {7,8};
    printf("%d", countNeighbours(&celulaTeste));

    return 0;
}