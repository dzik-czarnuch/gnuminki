//
// Created by sjal on 11/22/17.
//

#include "game.h"

WINDOW *game(int maxY, int changelingMaxX) {

    WINDOW *gameWindow = newwin(maxY - 1, 0, 0, changelingMaxX);
    box(gameWindow, 0, 0);
    wbkgd(gameWindow, COLOR_PAIR(1));

    wrefresh(gameWindow);
    return gameWindow;
}