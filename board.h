//
// Created by black on 12/19/17.
//

#ifndef GNUMINKI_BOARD_H
#define GNUMINKI_BOARD_H

#include <ncurses.h>
#include "square.h"


class board : public square{

public:
    board();
    bool create_board(int xsize, int ysize, square tab[300][100]); //tworzenie tablicy elementow square
    ~board();
};


#endif //GNUMINKI_BOARD_H
