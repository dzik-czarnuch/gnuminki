#include <ncurses.h>
#include <string>

int main (){
    initscr();
    std::string gameName = "GNUMinki";
    addstr(gameName | A_BOLD | A_UNDERLINE);
    printw("giereczka\n\tpozdraw");
    getch();
    endwin();

    return 0;
}
