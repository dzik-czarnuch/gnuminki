//
// Created by black on 12/20/17.
//

#ifndef GNUMINKI_PLANT_H
#define GNUMINKI_PLANT_H

#include <time.h>
#include <stdlib.h>
#include "board.h"


class plant : public square{
private:
    time_t t;
    int pos_x, pos_y; //
    int mine_number; //liczba min
public:
    plant(int, int); //losowanie pozycji a nastepnie jej wartosci 0-9
    bool set_mine(int, int); //rozstawianie min na polu
    int mine_plant(square); //losowanie ominowanych pol
    ~plant();

};


#endif //GNUMINKI_PLANT_H
