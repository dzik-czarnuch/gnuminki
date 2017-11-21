//
// Created by sjal on 11/9/17.
//

#include "bar.h"
#include <ncurses.h>

void bar(int maxY) {
    int height = 1;
    WINDOW *statusBar = newwin(height, 0, maxY - height, 0);
    wbkgd(statusBar, COLOR_PAIR(2));
    waddstr(statusBar, " F1:Help\tF2:New Game\tF3:Highscores\tF7:Debug Mode\tF12:Credits");
    wrefresh(statusBar);
    delwin(statusBar);
}