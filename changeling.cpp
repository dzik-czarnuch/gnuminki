//
// Created by sjal on 11/22/17.
//

#include "changeling.h"

WINDOW *changeling(int maxY, int maxX, int statusMaxY) {

    WINDOW *changelingWindow = newwin(maxY, maxX, statusMaxY, 0);
    box(changelingWindow, 0, 0);
    wbkgd(changelingWindow, COLOR_PAIR(1));

    wrefresh(changelingWindow);
    return changelingWindow;
}