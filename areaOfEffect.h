//
// Created by black on 12/20/17.
//

#ifndef GNUMINKI_AREAOFEFFECT_H
#define GNUMINKI_AREAOFEFFECT_H


#include "square.h"

class areaOfEffect : public square{
public:
    areaOfEffect();
    void show_area(int xsize, int ysize, square tab[300][100]); //odslanianie obszarow pustych
    ~areaOfEffect();
};


#endif //GNUMINKI_AREAOFEFFECT_H
