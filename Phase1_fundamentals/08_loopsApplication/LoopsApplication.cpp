#include "LoopsApplication.h"
#include <iostream>

void RunLoopsApplicationExperiment()
{
	// Simulating repeated gameplay events using loops

	std::cout << "\n=== Loops Application in Real Game Systems  ===\n";

	std::cout << "\n--- XP Accumulation over Multiple Actions ---\n";

	float TotalXP = 0.0f;
	const int NumberOfActions = 5;
	const float XPPerAction = 56.5f;

	// Simulating 5 actions that grant XP to the player. Each action grants a fixed amount of XP (56.5 in this case).
	for (int i = 0; i < NumberOfActions; ++i)
	{
		// The total xp is cast to an integer before the new xp is added, to simulate the display of xp as an integer value in the game.
		int PreviousXP = static_cast<int>(TotalXP);
		// The xp from the action is added to the total xp, stored as a float for accurate accumulation.
		TotalXP += XPPerAction;

		//The TotalXP variable retains its float value for accurate accumulation,
		//but the displayed XP is an integer to match typical game UI conventions.
		int NewXP = static_cast<int>(TotalXP);
		// The gain in XP is calculated as the difference between the new XP and the previous XP, which is displayed to the player. 
		int DisplayGain = NewXP - PreviousXP;
		std::cout << "Action " << (i + 1) << ": Gained XP +" << DisplayGain << "\n";
	}

	std::cout << "\n--- Leveling Up System ---\n";

	// Simulating a leveling up system where the player gains XP and levels up when reaching the threshold

	TotalXP = 0.0f; // Resetting total XP for the leveling up system
	int Level = 1; // Starting level of the player
	const float LevelUpThreshold = 100.0f; // The XP threshold required to level up
	int ToolBonus = 5; // A multiplier that could represent a bonus from using a specific tool or weapon, which increases the XP gained per action

	for (int i = 0; i < 25; ++i)
	{
		int BonusTier = Level / 5; // Every 5 levels, the player gets an additional bonus tier
		TotalXP += XPPerAction + ToolBonus + BonusTier; // Simulating XP gain from actions with a slight increase on each level to show progression

		while (TotalXP >= LevelUpThreshold) // Check if level up threshold is reached
		{
			++Level; // Increase the player's level
			TotalXP -= LevelUpThreshold; // Subtract remaining xp after leveling up to carry over the excess xp.
			std::cout << "Level Up! Level: " << Level << "\n";

		}
		std::cout << "Current XP: " << static_cast<int>(TotalXP) << "\n";
	}


	std::cout << "\n--- Health Regeneration System ---\n";
	// Simulating a health regeneration system where the player regenerates health over time until fully healed
	
	int CurrentHealth = 30; // Starting health of the player
	const int MaxHealth = 100;
	const int RegenerationTicks = 25; // Number of ticks to simulate health regeneration

	const int LowHealthThreshold = 50; // Threshold for faster regeneration
	const int MediumHealthThreshold = 75; // Threshold for medium regeneration

	const int FastRegenRate = 3; // Health points regenerated per tick when health is low
	const int MediumRegenRate = 2; // Health points regenerated per tick when health is medium
	const int SlowRegenRate = 1; // Health points regenerated per tick when health is high

	for (int tick = 0; tick < RegenerationTicks; ++tick)
	{
		if (CurrentHealth >= MaxHealth)
			break; // Stop regenerating if health is full

		if (CurrentHealth < LowHealthThreshold)
		{
			CurrentHealth += FastRegenRate; // Faster regeneration when health is low
		}
		else if (CurrentHealth < MediumHealthThreshold)
		{
			CurrentHealth += MediumRegenRate; // Slower regeneration when health is above 50
		}
		else
		{
			CurrentHealth += SlowRegenRate; // Slowest regeneration when health is above 75
		}

		if (CurrentHealth > MaxHealth)
			CurrentHealth = MaxHealth; // Cap health at max

		std::cout << "Tick " << tick << ": Health: " << CurrentHealth << "\n";
		

	}
}
