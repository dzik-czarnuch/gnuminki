#include <ncurses.h>

#include "bar.h"
#include "status.h"
#include "changeling.h"
#include "game.h"

/*
 * GNUminki - gra sapero-podobna na GPLv3
 * Damian Fajfer, Miłosz Szczepański
 * Wydział Elektroniki i Telekomunikacji
 * Politechnika Poznańska, 2017
 */

/* TODO: Most important, fix status.cpp so it returns a vector
 * that you can put into changeling.h
 */

int main() {
    int ch, maxY, maxX;
    int statusMaxY, changelingMaxX;
    initscr();
    raw();
    noecho();
    keypad(stdscr, true);

    start_color();
    init_pair(1, COLOR_GREEN, COLOR_BLACK);
    init_pair(2, COLOR_WHITE, COLOR_BLUE);
    init_pair(3, COLOR_WHITE, COLOR_CYAN);
    wbkgd(stdscr, COLOR_PAIR(1));

    getmaxyx(stdscr, maxY, maxX);
    refresh();

    bar(maxY);
    statusMaxY = status(maxY / 5, (int) (maxX / 4.8));
    changelingMaxX = changeling(maxY - statusMaxY - 1, (int) (maxX / 4.8), statusMaxY);
    // stdscr - status height - bar height
    game(maxY, changelingMaxX);

    ch = getch();
    switch (ch) {
        case KEY_F(1): {
            waddstr(stdscr, "F1 pressed");
            break;
        }
        case KEY_F(2): {
            waddstr(stdscr, "F2 pressed");
            break;
        }
        case KEY_F(3): {
            waddstr(stdscr, "F3 pressed");
            break;
        }
        case KEY_F(7): {
            waddstr(stdscr, "F7 pressed");
            break;
        }
        case KEY_F(12): {
            waddstr(stdscr, "F12 pressed");
            break;
        }
        default: // do nothing;
            break;
    }
    refresh();
    getch();
    endwin();
    return 0;
}
