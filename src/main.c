#include "../conway/cell.h"
#include "../conway/universe.h"
#include "../conway/life.h"

int main(){
    Cell positions[] = {{1, 7, 6}, {1, 8,7}, {1, 6, 8}, {1, 7, 8}, {1, 8, 8}};
    createSeed(positions);

    while (1) {
        initNeighbours();
        killCell();
        bornCell();
    }

    return 0;
}