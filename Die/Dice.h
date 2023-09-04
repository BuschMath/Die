#ifndef DICE_H
#define DICE_H

#include <vector>
#include "Die.h"

class Dice {
private:
    std::vector<Die> dice;  // Vector to hold multiple Die objects

public:
    Dice(int numDice, int sidesPerDie);  // Constructor to initialize 'numDice' number of 'sidesPerDie'-sided dice
    void roll();  // Roll all dice
    int getTotalValue() const;  // Get total value after rolling all dice
};

#endif // DICE_H
