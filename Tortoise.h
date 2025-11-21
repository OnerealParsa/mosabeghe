#ifndef TORTOISE_H
#define TORTOISE_H

class Tortoise {
private:
    int position;

public:
    Tortoise();
    int getPosition() const;
    void setPosition(int pos);
    void move();
};

#endif