#include "Tortoise.h"
#include <cstdlib>

Tortoise::Tortoise() : position(1) {
    
}

int Tortoise::getPosition() const {
    return position;
}

void Tortoise::setPosition(int pos) {
    if (pos < 1) position = 1;
    else if (pos > 70) position = 70;
    else position = pos;
}

void Tortoise::move() {
    int moveType = rand() % 10;
    
    if (moveType < 5) {
        setPosition(position + 3);
    } else if (moveType < 7) {
        setPosition(position - 6);
    } else {
        setPosition(position + 1);
    }
}