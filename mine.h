//
// Created by black on 12/20/17.
//

#ifndef GNUMINKI_MINE_H
#define GNUMINKI_MINE_H


#include "plant.h"

class mine : public plant{
public:
    mine();
    bool set_mine(int, int); //zostawianie min na polu
    ~mine();
};


#endif //GNUMINKI_MINE_H
