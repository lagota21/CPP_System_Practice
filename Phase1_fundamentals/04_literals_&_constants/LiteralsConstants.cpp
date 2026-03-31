#include "LiteralsConstants.h"
#include <iostream>
#include <string>
#include <limits>

namespace Temperature // Temperature namespace to group compiled-time constants that represent different temperature thresholds
{
	//constexpr is used to define constants that are evaluated at compile time, 
	//ensuring they cannot be modified at runtime and can be optimized by the compiler
	constexpr float WarmTemp = 30.0f;
	constexpr float MildTemp = 13.0f;
	constexpr float ColdTemp = -1.0f;
}

namespace Items // Item namespace contains compiled-time constants that represent the health effects of different items
{
	constexpr int HealingPotion = 15; // A Healing Potion increases health by 15
	constexpr int PoisonApple = -10; // A Poison Apple decreases health by 10
}


void RunLiteralsConstantExperiment()
{

	std::cout << "\n=== Literals and Constants Experiment ===\n\n";

	float CurrentTemp;

	std::cout << "Enter a Temperature: ";
	std::cin >> CurrentTemp;

	std::cout << "\nThe Current Temperature is: " << CurrentTemp << "\n";

	// Evaluate the current temperature against the defined thresholds
	if (CurrentTemp >= Temperature::WarmTemp)
	{
		std::cout << "The Temperature is HOT!\n\n";
	}
	else if (CurrentTemp <= Temperature::ColdTemp)
	{
		std::cout << "The Temperature is COLD!\n\n";
	}
	else
	{
		std::cout << "The Temperature is Just Right!\n\n";
	}

	// Clear leftover newline BEFORE getline
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	

	int PlayerHealth = 100;
	std::cout << "Your current health is: " << PlayerHealth << "\n";

	// Prompt the user to enter an item and apply its effect on the player's health
	std::cout << "Enter an Item (Healing Potion or Posion Apple): ";
	std::string ItemInput;
	std::cout << "\nType an item: ";
	std::getline(std::cin, ItemInput);

	// Check the input item and apply its effect on the player's health using the defined constants
	if (ItemInput == "Healing Potion")
	{
		PlayerHealth += Items::HealingPotion;
		std::cout << "You used a Healing Potion! Your health is now: " << PlayerHealth << "\n\n";
	}
	else if (ItemInput == "Poison Apple")
	{
		PlayerHealth += Items::PoisonApple;
		std::cout << "You ate a Poison Apple! Your health is now: " << PlayerHealth << "\n\n";
	}
	else
	{
		std::cout << "Unknown item. No effect on health.\n\n";
	}
}
