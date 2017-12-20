//
// Created by black on 12/20/17.
//

#ifndef GNUMINKI_PLANT_H
#define GNUMINKI_PLANT_H

#include <time.h>
#include <stdlib.h>
#include "board.h"
#include "mine.h"

class plant : public mine{
private:
    time_t t;
    int pos_x, pos_y; //
    int mine_number; //liczba min
public:
    plant(int, int); //losowanie pozycji a nastepnie jej wartosci 0-9
    int mine_plant();
    ~plant();

};


#endif //GNUMINKI_PLANT_H
