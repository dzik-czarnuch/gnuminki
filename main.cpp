#include <ncurses.h>

#include "bar.h"
#include "status.h"
#include "changeling.h"
#include "game.h"
#include "help.h"
#include "menu.h"

///////////////////////// moje pliki do zalaczenia
#include "square.h"
#include "areaOfEffect.h"
#include "board.h"
#include "plant.h"
#include "win.h"
#include <time.h> // od sleepa


/*
 * GNUminki - gra sapero-podobna na GPLv3
 * Damian Fajfer, Miłosz Szczepański
 * Wydział Elektroniki i Telekomunikacji
 * Politechnika Poznańska, 2017
 */

/* TODO: Make every window WINDOW type and refresh all windows after closing popup
 */

int main() {
    int ch, maxY, maxX;

    WINDOW *barWindow, *statusWindow, *changelingWindow, *gameWindow;
    WINDOW *helpWindow, *menuWindow;



    initscr();
    raw();
    noecho();
    keypad(stdscr, true);
    start_color();
    init_pair(1, COLOR_GREEN, COLOR_BLACK);     //windows default
    init_pair(2, COLOR_WHITE, COLOR_BLUE);      //popup & bar default
    init_pair(3, COLOR_WHITE, COLOR_MAGENTA);   //debug default
    wbkgd(stdscr, COLOR_PAIR(1));
    getmaxyx(stdscr, maxY, maxX);
    refresh();

//  TODO: Skalowanie okna menu

    menuWindow = menu();
    ////////////////////////////// GAME

    square *tab[xsize][ysize]; // musze dostac wielkosc tablicy od ciebie

    board *plansza = new board(); //tworzenie planszy
    plansza->create_board(xsize, ysize, tab); //wywołanie funkcji od tego

    plant *ustaw = new plant(xsize, ysize); //ustawianie min na planszy
    ustaw->mine_plant(tab);



    win *wygrana = new win; //do sprawdzania wygranej

    areaOfEffect *pokaz = new areaOfEffect(); //wskaznik to wywołania funkcji w sterowaniu



    int end = 0;

    while (end ==0) {

        /// u musi być sterowanie
        if (win->if_win() == true) { //wyjscie z petli jesli wygrana
            end = 1;
        }
    }

    //po wyjsciu z pentli wygrana bądź przegrana, mozna dac jakis komunikat

    }

    /////////////////////////////
    barWindow = bar(maxY);
    statusWindow = status(maxY / 5, (int) (maxX / 4.8));
    changelingWindow = changeling(maxY - getmaxy(statusWindow) - getmaxy(barWindow), (int) (maxX / 4.8), getmaxy(statusWindow));
    gameWindow = game(maxY, getmaxx(changelingWindow));



    //////////////////////////////////////////////// Bar buttons

        ch = getch();
        switch (ch) {
            case KEY_F(2): {
                waddstr(stdscr, "F2 pressed");
                break;
            }
            case KEY_F(3): {
                waddstr(stdscr, "F3 pressed");
                break;
            }
            case KEY_F(4): {
                //TODO learn panel library
                //TODO fork() z stdlib.h; time.h
                helpWindow = help(maxY, maxX);
                break;
            }
            case KEY_F(12): {
                waddstr(stdscr, "F12 pressed");
                break;
            }
            default: //do nothing
                break;
        }
        refresh();
    endwin();
    return 0;
}