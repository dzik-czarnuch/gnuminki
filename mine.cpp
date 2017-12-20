//
// Created by black on 12/20/17.
//

#include "mine.h"
#include "board.h"

mine::mine() {

}

bool mine::set_mine(int x, int y) {
    int pos_x = x;
    int pos_y = y;

    if(tab[pos_x][pos_y].value != 9) {

        tab[pos_x][pos_y].value = 9; //set bomb

        for (int i = -1; i<2; i++) {

            for (int j = -1; j < 2; j++) {
                if ((pos_x + j) < 0 || (pos_y + i) < 0) continue; //border
                if ((pos_x + j) > 9 || (pos_y + i) > 9) continue; //border

                if (tab[pos_x + j][pos_y + i].wartosc == 9) continue; //mine
                tab[pos_x + j][pos_y + i].wartosc += 1;
            }
        }
    }
    return true;
}

mine::~mine() {


}