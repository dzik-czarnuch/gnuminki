//
// Created by black on 12/20/17.
//

#include "areaOfEffect.h"

areaOfEffect::areaOfEffect() {

}

void areaOfEffect::show_area(int xsize, int ysize, square tab) {

    if (xsize < 0 || xsize > 9) return;
    if (ysize < 0 || ysize > 9) return;
    if (tab[xsize][ysize].show == true) return;

    if (tab[xsize][ysize].wartosc != 9 && tab[xsize][ysize].show == false)
        tab[xsize][ysize].show = true;

    if (tab[xsize][ysize].value != 0) return;

    show_area(xsize -1, ysize-1);
    show_area(xsize-1, ysize);
    show_area(xsize-1, ysize+1);
    show_area(xsize+1, ysize-1);
    show_area(xsize+1, ysize);
    show_area(xsize+1, ysize + 1);
    show_area(xsize, ysize-1);
    show_area(xsize, ysize);
    show_area(xsize, ysize+1);

}

areaOfEffect::~areaOfEffect() {


}