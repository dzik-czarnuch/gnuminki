//
// Created by black on 12/20/17.
//

#include "plant.h"

plant::plant(int x, int y) {

    pos_x = x;
    pos_y = y;

}

int plant::mine_plant() {

    mine_number = (pos_y * pos_x) * 0.15;
    srand((unsigned)time(&t));

    while (mine_number>0){

        pos_x = rand()%15;
        pos_y = rand()%15;

        if (tab[pos_x][pos_y].value!=9){

            set_mine(pos_x, pos_y);
            mine_number--;
        }
    }
}

plant::~plant() {


}