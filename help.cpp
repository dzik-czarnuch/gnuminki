//
// Created by sjal on 11/22/17.
//

#include "help.h"

WINDOW *help(int maxY, int maxX) {
    int i = 0;

    WINDOW *helpWindow = newwin((int) (maxY / 1.5), (int) (maxX / 1.5), (int) (maxY * 0.2), (int) (maxX * 0.2));
    box(helpWindow, 0, 0);
    wbkgd(helpWindow, COLOR_PAIR(2));

    mvwprintw(helpWindow, ++i, ((int) (maxX / 1.5) - (2 * (int) (maxX * 0.2))), "Help", 0, 0, maxY, maxX);
    mvwprintw(helpWindow, ++i, 1, " Time\t: Time passed since you started playing the game", 0, 0, maxY, maxX);
    mvwprintw(helpWindow, ++i, 1, " Mines\t: Number of mines left in the game (unflagged)", 0, 0, maxY, maxX);
    mvwprintw(helpWindow, ++i, 1, " Flags\t: Number of mines you've already flagged", 0, 0, maxY, maxX);
    ++i;
    mvwprintw(helpWindow, ++i, 1, " X\t: unknown square", 0, 0, maxY, maxX);
    mvwprintw(helpWindow, ++i, 1, " \t: liberated square", 0, 0, maxY, maxX);
    mvwprintw(helpWindow, ++i, 1, " F\t: flag", 0, 0, maxY, maxX);
    mvwprintw(helpWindow, ++i, 1, " 1-7\t: number of mines adjacent to this square", 0, 0, maxY, maxX);

    wrefresh(helpWindow);
    getch();
    return helpWindow;
}