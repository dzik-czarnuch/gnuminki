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
    WINDOW *barWindow, *statusWindow, *changelingWindow, *gameWindow;
    WINDOW *helpWindow;
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

    barWindow = bar(maxY);
    statusWindow = status(maxY / 5,
                          (int) (maxX / 4.8));
    changelingWindow = changeling(maxY - getmaxy(statusWindow) - getmaxy(barWindow),
                                  (int) (maxX / 4.8),
                                  getmaxy(statusWindow));
    gameWindow = game(maxY, getmaxx(changelingWindow));

        ch = getch();
        switch (ch) {
            case KEY_F(1): {
                //TODO learn panel library
                helpWindow = help(maxY, maxX);
                getch();
                delwin(helpWindow);
                wrefresh(helpWindow);
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