#include "operators.h"
#include <iostream>

// This function demonstrates the use of various operators in C++

void RunOperatorsExperiment()
{

	std::cout << "\n=== Operators Experiment ===\n\n";

	int a = 10;
	int b = 3;
	int health = 5;
	int coins = 25;

	std::cout << "a = " << a << ", b = " << b << ", health = " << health << "\n\n";

	// Arithmetic operators
	std::cout << "\n=== Arithmetic Experiment ===\n\n";

	std::cout << "a + b = " << a + b << "\n"; // Addition
	std::cout << "a - b = " << a - b << "\n"; // Subtraction
	std::cout << "a * b = " << a * b << "\n"; // Multiplication
	std::cout << "\n--- Integer Division vs Floating Point Division ---\n";
	std::cout << "10 (a) / 3 (b) = " << a / b << "\n"; // Division (integer division)
	std::cout << "10.0 / 3 = " << 10.0 / 3 << "\n"; // Division (floating point division)
	std::cout << "\n a % b = " << a % b << "\n"; // Modulo - remainder of division

	health = 5;
	std::cout << "\n--- Post Increment Test ---\n";
	std::cout << "health++ returns: " << health++ << "\n";
	std::cout << "health after health++: " << health << "\n";

	health = 5;
	std::cout << "\n--- Pre Increment Test ---\n";
	std::cout << "++health returns: " << ++health << "\n";
	std::cout << "health after ++health: " << health << "\n";

	// Assignment operators
	std::cout << "\n=== Assignment Experiment ===\n\n";

	std::cout << "Coins = " << coins << "\n";
	coins += 50; // Add 50 to coins
	std::cout << "Coins += 50: " << coins << "\n"; //updated coins
	coins = 25; // Reset d
	std::cout << "Coins -= b: " << (coins -= b) << "\n"; // Subtract and assign

	// Comparison operators
	std::cout << "\n=== Comparison Experiment ===\n\n";

	std::cout << std::boolalpha; // Print bool values as true/false
	std::cout << "a == b: " << (a == b) << "\n"; // Equal to
	std::cout << "a != b: " << (a != b) << "\n"; // Not equal to
	std::cout << "a > b: " << (a > b) << "\n";   // Greater than
	std::cout << "a < b: " << (a < b) << "\n";   // Less than
	std::cout << "a >= b: " << (a >= b) << "\n"; // Greater than or equal to
	std::cout << "a <= b: " << (a <= b) << "\n\n"; // Less than or equal to


	// Logical operators
	std::cout << "\n=== Logical Operators Test ===\n\n";

	bool isAlive = true;
	bool canClimb = false;

	std::cout << "isAlive: " << isAlive << ", canClimb: " << canClimb << "\n\n";
	std::cout << "isAlive && canClimb: " << (isAlive && canClimb) << "\n"; // Logical AND
	std::cout << "isAlive || canClimb: " << (isAlive || canClimb) << "\n"; // Logical OR
	std::cout << "!isAlive: " << (!isAlive) << "\n"; // Logical NOT
}
