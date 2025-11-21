#ifndef RACE_H
#define RACE_H

#include "Tortoise.h"
#include "Hare.h"

class Race {
private:
    Tortoise tortoise;
    Hare hare;
    static const int TRACK_LENGTH = 70;

public:
    Race();
    void start();
    void printTrack() const;
    bool isRaceOver() const;
    void announceWinner() const;
};

#endif