#include <ncurses.h>

#include "bar.h"

/*
 * GNUminki - gra sapero-podobna na GPLv3
 * Damian Fajfer, Miłosz Szczepański
 * Wydział Elektroniki i Telekomunikacji
 * Politechnika Poznańska, 2017
 */

int main() {
    int ch, maxY, maxX;
    initscr();
    raw();
    noecho();
    keypad(stdscr, TRUE);

    start_color();
    init_pair(1, COLOR_CYAN, COLOR_BLACK);
    init_pair(2, COLOR_WHITE, COLOR_BLUE);
    wbkgd(stdscr, COLOR_PAIR(1));

    getmaxyx(stdscr, maxY, maxX);
    printw("Stdscr:\nY:%d\nX:%d", maxY, maxX);
    refresh();

    bar(maxY);

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
