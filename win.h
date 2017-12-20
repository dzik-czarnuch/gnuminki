//
// Created by black on 12/20/17.
//

#ifndef GNUMINKI_WIN_H
#define GNUMINKI_WIN_H

#include <ncurses.h>
#include "square.h"

class win : protected square{
public:
    win();
    bool if_win(int, int, square); //sprawdzanie pola czy wygranax
    ~win();
};


#endif //GNUMINKI_WIN_H
