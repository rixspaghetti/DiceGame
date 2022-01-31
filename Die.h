/*
 * Ricardo Escarcega
 * Prof Fritz
 * CST - 210
 * Wed/Fri
 * Worked with Zachary Vollmer
 */

#ifndef DICE_DIE_H
#define DICE_DIE_H
class Die
{
private:
    int sides;
    int value;
public:
    Die();
    Die(int s);

    int getValue()const;
    void roll();
};

#endif //DICE_DIE_H
