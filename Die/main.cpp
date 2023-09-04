#include <iostream>
#include "Die.h"
#include "Dice.h"

int main() {
    // Test the Die class
    Die singleDie(6);
    singleDie.roll();
    std::cout << "Single die rolled: " << singleDie.getValue() << std::endl;

    // Test the Dice class with 5 dice, each having 6 sides
    Dice dice(5, 6);
    dice.roll();
    std::cout << "Total value after rolling 5 dice: " << dice.getTotalValue() << std::endl;

    return 0;
}
