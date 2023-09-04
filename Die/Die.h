#ifndef DIE_H       // Header guard to prevent multiple inclusions
#define DIE_H

#include <ctime>
#include <cstdlib>

class Die {
private:
    int sides;
    int currentValue;

public:
    Die();             // Default constructor
    Die(int n);        // Parameterized constructor
    void roll();       // Method to roll the die
    int getValue() const; // Getter for current value
    int getSides() const; // Getter for number of sides
    void setSides(int n); // Optional: Setter for number of sides
};

#endif // End of header guard
