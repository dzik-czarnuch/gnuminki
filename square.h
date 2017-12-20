//
// Created by black on 12/19/17.
//

#ifndef GNUMINKI_SQUARE_H
#define GNUMINKI_SQUARE_H


class square {
protected:
    int value; //wartosc 0-9, 0 - puste pole, 9 - mina
    bool show; //czy pole jest odkryte
public:
    square();
    ~square();
};


#endif //GNUMINKI_SQUARE_H
