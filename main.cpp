#include <ncurses.h>

#include "bar.h"
#include "status.h"
#include "changeling.h"
#include "game.h"
#include "help.h"

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
    int statusMaxY, changelingMaxX;
    WINDOW *helpWindow;
    initscr();
    raw();
    noecho();
    keypad(stdscr, true);

    start_color();
    init_pair(1, COLOR_GREEN, COLOR_BLACK);
    init_pair(2, COLOR_WHITE, COLOR_BLUE);
    init_pair(3, COLOR_WHITE, COLOR_MAGENTA);
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
            helpWindow = help(maxY, maxX);
            delwin(helpWindow);
            doupdate();
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
        default:
            refresh();
            break;
    }
    refresh();
    getch();

    endwin();
    return 0;
}
