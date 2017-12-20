//
// Created by black on 12/20/17.
//

#ifndef GNUMINKI_WIN_H
#define GNUMINKI_WIN_H

#include <ncurses.h>

class win {
public:
    win();
    bool if_win(); //sprawdzanie pola czy wygrana
    ~win();
};


#endif //GNUMINKI_WIN_H
