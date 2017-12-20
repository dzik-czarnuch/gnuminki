//
// Created by black on 12/19/17.
//

#ifndef GNUMINKI_BOARD_H
#define GNUMINKI_BOARD_H

#include <ncurses.h>
#include "square.h"


class board : protected  square{
protected:
    int xsize, ysize; //szerokosc i wysokosc pola

public:
    board(int, int); //przekazanie szerokosci i wysokosci
    void create_board(square); //tworzenie tablicy elementow square
    ~board();
};


#endif //GNUMINKI_BOARD_H
