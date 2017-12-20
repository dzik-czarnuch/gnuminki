//
// Created by black on 12/19/17.
//

#include "board.h"

board::board(int x, int y) {

    xsize = x;
    ysize = y;

}

void board::create_board(square tab) {

    for(int i = 0; i<xsize; i++){
        for(int j=0; j<ysize; j++){

           tab[i][j].value = 0;
           tab[i][j].show = false;
        }

        return true;
    }

}


board::~board() {

}