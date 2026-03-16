#include <iostream>
#include "Variables.h"
#include <string>

// This function demonstrates the use of commonly used variable types in gameplay systems
// It also shows how to output variable values and their sizes in bytes

void RunVariablesExperiment()
{
    std::cout << "\n=== Variables Experiment ===\n";

	// Declared and initialized gameplay related variables of different types
    int health = 100;
    float stamina = 50.5f;
	double currency = 1234.56;
	char rank = 'A';
	std::string playerName = "Hero";
	bool isClimbing = false;

	//Prints bool values as true/false instead of 1/0
    std::cout << std::boolalpha;

	// Output variable values to the console
    std::cout << "Health: " << health << "\n";
    std::cout << "Stamina: " << stamina << "\n";
    std::cout << "Currency: " << currency << "\n";
    std::cout << "Rank: " << rank << "\n";
    std::cout << "Player Name: " << playerName << "\n";
    std::cout << "Is climbing: " << isClimbing << "\n";

	// Output the size of each variable type in bytes
    std::cout << "\n--- Variable Sizes ---\n";
    std::cout << "int: " << sizeof(health) << " bytes\n";
    std::cout << "float: " << sizeof(float) << " bytes\n";
    std::cout << "double: " << sizeof(double) << " bytes\n";
    std::cout << "char: " << sizeof(char) << " byte\n";
    std::cout << "bool: " << sizeof(bool) << " byte\n";

}
