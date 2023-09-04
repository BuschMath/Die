#include "Dice.h"

// Constructor to initialize multiple dice with the same number of sides
Dice::Dice(int numDice, int sidesPerDie) {
    for (int i = 0; i < numDice; ++i) {
        dice.push_back(Die(sidesPerDie));
    }
}

// Roll all dice in the vector
void Dice::roll() {
    for (Die& die : dice) {
        die.roll();
    }
}

// Get the total value after rolling all dice
int Dice::getTotalValue() const {
    int totalValue = 0;
    for (const Die& die : dice) {
        totalValue += die.getValue();
    }
    return totalValue;
}
