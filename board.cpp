//
// Created by black on 12/19/17.
//

#include "board.h"

board::board() {


}

bool board::create_board(int xsize, int ysize, square tab[300][100]) {


    for(int i = 0; i<xsize; i++ ){
        for(int j=0; j<ysize; j++){

           tab[i][j].value = 0;
           tab[i][j].show = false;
        }
    }
    return true;
}

board::~board() {

}