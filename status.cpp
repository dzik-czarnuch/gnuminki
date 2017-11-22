//
// Created by sjal on 11/22/17.
//

#include "status.h"

WINDOW *status(int maxY, int maxX) {
    WINDOW *statusWindow = newwin(maxY, maxX, 0, 0);
    box(statusWindow, 0, 0);
    wbkgd(statusWindow, COLOR_PAIR(1));

    mvwprintw(statusWindow, 1, 2, "Time\t: %02d:%02d", 0, 0, maxY, maxX);
    mvwprintw(statusWindow, 2, 2, "Mines\t: %d", 0, 0, maxY, maxX);
    mvwprintw(statusWindow, 3, 2, "Flags\t: %d", 0, 0, maxY, maxX);
    //TODO: Update the time, somehow

    wrefresh(statusWindow);
    return statusWindow;
}
