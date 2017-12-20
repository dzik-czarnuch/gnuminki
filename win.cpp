//
// Created by black on 12/20/17.
//

#include "win.h"

win::win() {

}

bool win::if_win(int xsize, int ysize, square tab) {

    int mine = 0;

    for (int i = 0; i<xsize; i++)
    {
        for (int j = 0; j<ysize; j++)
        {
            if(tab[j][i].show==false)
                mine++;
        }
    }
    if (mine==10) return true;
    return false;
}

win::~win() {

}