//
// Created by sjal on 11/9/17.
//

#include "bar.h"

WINDOW *bar(int maxY) {
    int height = 1;

    WINDOW *statusBar = newwin(height, 0, maxY - height, 0);
    wbkgd(statusBar, COLOR_PAIR(2));

    waddstr(statusBar, " F2:New Game\tF3:Highscores\tF4:Help\t\tF12:Credits");

    wrefresh(statusBar);
    return statusBar;
}