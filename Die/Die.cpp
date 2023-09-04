#include "Die.h"  // Include the specification (interface)

// Default constructor
Die::Die() {
    sides = 6;
    srand(time(0));  // Seed random number generator
    roll();          // Initialize with a random value
}

// Parameterized constructor
Die::Die(int n) {
    sides = n;
    srand(time(0));  // Seed random number generator
    roll();          // Initialize with a random value
}

// Roll the die
void Die::roll() {
    currentValue = (rand() % sides) + 1;
}

// Getter for the current value
int Die::getValue() const {
    return currentValue;
}

// Getter for the number of sides
int Die::getSides() const {
    return sides;
}

// Optional: Setter for the number of sides
void Die::setSides(int n) {
    if (n > 0) {
        sides = n;
        roll(); // Roll to get an initial value for the new number of sides
    }
}
