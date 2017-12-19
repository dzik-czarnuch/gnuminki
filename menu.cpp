#include "menu.h"

WINDOW *menu() {

    char list[5][10] = {"Very Easy", "Easy", "Normal", "Hard", "Very Hard"};
    char item[10];

    initscr();
    WINDOW *menuWindow = newwin(7, 14, 1, 1);
    box(menuWindow, 0, 0);

    for (int i = 0; i < 5; i++) {
        if (i == 0)
            wattron(menuWindow, A_STANDOUT);
        else
            wattroff(menuWindow, A_STANDOUT);

        sprintf(item, "%-10s", list[i]);
        mvwprintw(menuWindow, i + 1, 2, "%s", item);
    }

    wrefresh(menuWindow);
    noecho();
    keypad(menuWindow, TRUE);
    curs_set(0);
    int j = 0, ch;

    while ((ch = wgetch(menuWindow)) != 'q') {

        sprintf(item, "%-10s", list[j]);
        mvwprintw(menuWindow, j + 1, 2, "%s", item);

        switch (ch) {
            case KEY_UP: {
                j--;
                if (j < 0)
                    j = 4;
                break;
            }
            case KEY_DOWN: {
                j++;
                if (j > 4)
                    j = 0;
                break;
            }
                //case 10:{
                //	printw("chuj");
                //	break;
                //	}
            default:
                break;
        }

        wattron(menuWindow, A_STANDOUT);
        sprintf(item, "%-10s", list[j]);
        mvwprintw(menuWindow, j + 1, 2, "%s", item);
        wattroff(menuWindow, A_STANDOUT);
    }

    delwin(menuWindow);
    endwin();

    return menuWindow;
}