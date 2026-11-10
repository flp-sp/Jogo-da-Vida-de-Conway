#include "../conway/cell.h"
#include "../conway/universe.h"
#include <threads.h>
#include "../conway/life.h"

void killCell(){
    for(int i = 0; i < universe.count; i++){
        Cell currentCell = universe.liveCells[i];
        int neighbours = countNeighbours(&currentCell);

        if(currentCell.status == 1 && (neighbours < 2 || neighbours > 3)){
            removeCell(currentCell);
        }
    }
}

void bornCell(){
    for(int i = 0; i < universe.count; i++){
        int neighbours = countNeighbours(universe.liveCells);

        if(neighbours == 2 || neighbours == 3){
           if(universe.liveCells[i].status == 0){
                universe.liveCells[i].status = 1;
           } 
        }
    }
}

void initNeighbours(){
    // inicializar todos os vizinhos nao existente
    for(int i = 0; i < universe.count; i++){
        Cell currentCell = universe.liveCells[i];

        if(!checkAllCells(currentCell.posX + 1, currentCell.posY)){
            Cell c = {0, currentCell.posX + 1, currentCell.posY};
            addCell(c);
        }

        if(!checkAllCells(currentCell.posX - 1, currentCell.posY)){
            Cell c = {0, currentCell.posX - 1, currentCell.posY};
            addCell(c);
        }

        //vertical
        if(!checkAllCells(currentCell.posX, currentCell.posY + 1)){
            Cell c = {0, currentCell.posX, currentCell.posY + 1};
            addCell(c);
        }

        if(!checkAllCells(currentCell.posX, currentCell.posY - 1)){
            Cell c = {0, currentCell.posX, currentCell.posY - 1};
            addCell(c);
        }

        //diagonal
        if(!checkAllCells(currentCell.posX + 1, currentCell.posY + 1)){
            Cell c = {0, currentCell.posX + 1, currentCell.posY + 1};
            addCell(c);
        }

        if(!checkAllCells(currentCell.posX + 1, currentCell.posY + 1)){
            Cell c = {0, currentCell.posX + 1, currentCell.posY};
            addCell(c);
        }

        if(!checkAllCells(currentCell.posX - 1, currentCell.posY - 1)){
            Cell c = {0, currentCell.posX - 1, currentCell.posY - 1};
            addCell(c);
        }

        if(!checkAllCells(currentCell.posX - 1, currentCell.posY + 1)){
            Cell c = {0, currentCell.posX - 1, currentCell.posY + 1};
            addCell(c);
        }
            
    }
}