#include <ncurses.h>

#include "bar.h"
#include "status.h"
#include "changeling.h"
#include "game.h"
#include "help.h"

///////////////////////// moje pliki do zalaczenia
#include "square.h"
#include "areaOfEffect.h"
#include "board.h"
#include "plant.h"
#include "win.h"


/*
 * GNUminki - gra sapero-podobna na GPLv3
 * Damian Fajfer, Miłosz Szczepański
 * Wydział Elektroniki i Telekomunikacji
 * Politechnika Poznańska, 2017
 */

/* TODO: Make every window WINDOW type and refresh all windows after closing popup
 */

int main() {

    int xsize = 124;
    int ysize = 55;

    square tab[xsize][ysize]; // musze dostac wielkosc tablicy od ciebie

    board *tablica;
   // square * wsk1 =  &tablica; //tworzenie planszy
    tablica -> create_board(xsize, ysize, tab[300][100]); //wywołanie funkcji od tego

    plant *ustaw;
    //square * wsk2 =  &ustaw;
    ustaw -> mine_plant(xsize, ysize, tab[300][100]);

    win *wygrana;
    //square * wsk3 =  &wygrana;
    wygrana -> if_win(xsize, ysize, tab[300][100]); //do sprawdzania wygranej

    areaOfEffect *pokaz;
    //square * wsk4 = &pokaz //wskaznik to wywołania funkcji w sterowaniu
    pokaz->show_area(xsize, ysize, tab[300][100]);


    return 0;
}