#include <iostream>  // Standard input-output library
#include <string>
#include "constants.h"
#include "Monster.h"

// Entry point of the program
int main() {
    std::cout << "My favorite number is: " << FAV_NUM << std::endl;  // Print message to console
    Monster monster;
    monster.SayHello();
    return 0;  // Return 0 to indicate successful execution
}
