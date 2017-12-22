//
// Created by black on 12/19/17.
//

#ifndef GNUMINKI_SQUARE_H
#define GNUMINKI_SQUARE_H


class square {
public:
    int value; //wartosc 0-9, 0 - puste pole, 9 - mina
    bool show; //czy pole jest odkryte
    square();
    ~square();
    /*
    virtual bool create_board(int, int, square) = 0;
    virtual int mine_plant(int, int, square) = 0;
    virtual bool if_win(int, int, square) = 0;
    virtual void show_area(int, int, square) = 0;
     */
};


#endif //GNUMINKI_SQUARE_H
