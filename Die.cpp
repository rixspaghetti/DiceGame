/*
 * Ricardo Escarcega
 * Prof Fritz
 * CST - 210
 * Wed/Fri
 * Worked with Zachary Vollmer
 */
#include "Die.h"
#include <algorithm>

using namespace std;
    // initialize the attributes
    Die::Die()
    {
        sides = 6;
        value = 0;
    }
    Die::Die(int s)
    {
        int sides = s;
        int value = 0;
    }
    // roll dice get rand
    void Die::roll()
    {
        value = rand() % sides + 1;

    }
    int Die::getValue()const
    {
        return value;
    }



