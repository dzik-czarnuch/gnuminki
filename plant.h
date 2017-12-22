//
// Created by black on 12/20/17.
//

#ifndef GNUMINKI_PLANT_H
#define GNUMINKI_PLANT_H

#include <time.h>
#include <stdlib.h>
#include "board.h"


class plant : public square{
public:
    time_t t;
    plant(); //losowanie pozycji a nastepnie jej wartosci 0-9
    bool set_mine(int, int, square tab[300][100]); //rozstawianie min na polu
    int mine_plant(int, int, square tab[300][100]); //losowanie ominowanych pol
    ~plant();

};


#endif //GNUMINKI_PLANT_H
