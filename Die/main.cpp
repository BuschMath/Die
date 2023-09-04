#include <iostream>
#include "Die.h"  // Include the Die class specification

int main() {
    Die die1; // Default 6-sided die
    die1.roll();
    std::cout << "Die1 rolled: " << die1.getValue() << std::endl;

    Die die2(12); // 12-sided die
    die2.roll();
    std::cout << "Die2 rolled: " << die2.getValue() << std::endl;

    return 0;
}
