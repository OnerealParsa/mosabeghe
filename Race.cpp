#include "Race.h"
#include <iostream>
using namespace std;

Race::Race() : tortoise(), hare() {}

void Race::start() {
    cout << "=== Hare and Tortoise Race ===\n";
    cout << "Race started!\n\n";
    
    int round = 1;
    
    while (!isRaceOver()) {
        cout << "Round " << round << ":\n";
        
        tortoise.move();
        hare.move();
        
        printTrack();
        
        if (tortoise.getPosition() == hare.getPosition()) {
            cout << "OUCH! They collided!\n";
        }
        
        cout << "---------------------------\n";
        round++;
    }
    
    announceWinner();
}

void Race::printTrack() const {
    for (int i = 1; i <= 70; i++) {
        if (i == tortoise.getPosition() && i == hare.getPosition()) {
            cout << "X";
        } else if (i == tortoise.getPosition()) {
            cout << "T";
        } else if (i == hare.getPosition()) {
            cout << "H";
        } else {
            cout << "_";
        }
    }
    cout << endl;
    
    cout << "Tortoise: " << tortoise.getPosition();
    cout << " | Hare: " << hare.getPosition() << endl;
}

bool Race::isRaceOver() const {
    return tortoise.getPosition() >= 70 || hare.getPosition() >= 70;
}

void Race::announceWinner() const {
    cout << "\n=== Race Results ===\n";
    
    if (tortoise.getPosition() >= 70 && hare.getPosition() >= 70) {
        cout << "IT'S A TIE\n";
    } else if (tortoise.getPosition() >= 70) {
        cout << "TORTOISE WINS\n";
    } else {
        cout << "HARE WINS\n";
    }
}