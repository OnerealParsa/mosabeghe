#include "Hare.h"
#include <cstdlib>

Hare::Hare() : position(1) {
    
}

int Hare::getPosition() const {
    return position;
}

void Hare::setPosition(int pos) {
    if (pos < 1) position = 1;
    else if (pos > 70) position = 70;
    else position = pos;
}

void Hare::move() {
    int moveType = rand() % 10;
    
    if (moveType < 2) {
    } else if (moveType < 4) {
        setPosition(position + 9);
    } else if (moveType < 5) {
        setPosition(position - 12);
    } else if (moveType < 8) {
        setPosition(position + 1);
    } else {
        setPosition(position - 2);
    }
}