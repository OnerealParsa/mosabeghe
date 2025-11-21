#ifndef HARE_H
#define HARE_H

class Hare {
private:
    int position;

public:
    Hare();
    int getPosition() const;
    void setPosition(int pos);
    void move();
};

#endif