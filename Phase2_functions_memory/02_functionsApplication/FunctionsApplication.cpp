#include "FunctionsApplication.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

void InitializeRandomSeed()
{
	srand(time(0));;
}

int Multiply(int a, int b)
{
	return a * b;
}

void PrintResult(int value)
{
	std::cout << "Result: " << value << std::endl;
}

int CalculateDamage(int Damage)
{
	return Damage + (rand() % 6); // Random bonus damage between 0 and 5
}


// Function to heal the player by modifying the health variable through a reference
// Reference: implicit access, cannot be null, no dereference needed
void HealPlayer(int& PlayerHealth)
{
	PlayerHealth += 20; // Heal the player by 20 health points
}

void AttackEnemy(int& PlayerHealth, int* EnemyHealth)
{
	if (EnemyHealth == nullptr)
	{
		std::cout << "No enemy to attack!\n";
		return;
	}

	int PlayerDamage = CalculateDamage(15); // Base damage of 15 plus random bonus
	int EnemyDamage = CalculateDamage(10); // Base damage of 10 plus random bonus

	std::cout << "\n== [Combat Started] ==\n";

	*EnemyHealth -= PlayerDamage; // Damage the enemy
	std::cout << "Enemy Health after attack: " << *EnemyHealth << std::endl;

	if (*EnemyHealth > 0)
	{
		PlayerHealth -= EnemyDamage; // Enemy counterattacks
		std::cout << "Player Health after enemy counterattack: " << PlayerHealth << std::endl;
	}
	else
	{
		std::cout << "Enemy defeated!\n";
	}

	std::cout << "== [Combat Ended] ==\n";
	std::cout << "Player Health: " << PlayerHealth << std::endl;
	std::cout << "Enemy Health: " << *EnemyHealth << std::endl;
}




void RunFunctionsApplicationExperiment()
{
	InitializeRandomSeed();

	int Result = Multiply(5, 10);
	PrintResult(Result);


	std::cout << "\n[Player System] Healing...\n";
	int PlayerHealth = 100; // Original player health
	std::cout << "Player Health: " << PlayerHealth << std::endl;
	HealPlayer(PlayerHealth); // Pass PlayerHealth by reference to the function to modify it
	std::cout << "Player Health after healing (by reference): " << PlayerHealth << std::endl;

	PlayerHealth = 100; // Original player health
	int EnemyHealth = 75; // Original enemy health

	std::cout << "\n[Combat System] Player Starting Health: " << PlayerHealth << ", Enemy Starting Health: " << EnemyHealth << "\n";

	AttackEnemy(PlayerHealth, &EnemyHealth); // Pass PlayerHealth by reference and EnemyHealth by pointer to the combat function

}
