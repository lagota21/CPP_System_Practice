#include "VariableLifeTime_Scope.h"
#include <iostream>
#include <memory>

// This experiment demonstrates variable lifetime and scope concepts in C++ using examples relevant to game development,
// such as temporary buffs, persistent upgrades, and dynamic enemy spawning.

// The local variable example defines a temporary buff that resets every function call
void ApplyTemporaryBuff()
{
    int BuffAmount = 10; // Local -> resets every function call
    std::cout << "Temporary Buff Applied: +" << BuffAmount << " Defence\n";
}

// The static variable example defines a persistent upgrade that retains its value across function calls
void ApplyPersistentUpgrade()
{
    static int UpgradeLevel = 0; //persists between calls
    UpgradeLevel++;

    std::cout << "Persistent Upgrade Level: " << UpgradeLevel << "\n";
}

//Dynamic Memory Example (Spawn/Destroy System)
class Enemy
{
public:
	// Constructor with parameter to set health and Health member variable initialization
    Enemy(int InHealth) : Health(InHealth)
    {
		//initialization of Health member variable with the value passed as InHealth parameter
        std::cout << "Enemy Spawned with Health: " << Health << "\n";
    }

	// Destructor to show when the enemy is destroyed
    ~Enemy()
    {
        std::cout << "Enemy Destroyed\n";
    }

private:
	//Member variable to store the health of the enemy
	//set to private to encapsulate the data and prevent direct access from outside the class
    int Health;
};

void SpawnEnemy()
{
	// Dynamic allocation - using smart pointer to manage lifetime automatically
    std::unique_ptr<Enemy> SpawnedEnemy = std::make_unique<Enemy>(99);

    std::cout << "Enemy exists inside this function scope.\n";
	// 1. SpawnedEnemy goes out of scope at the end of this function.
	// 2. The destructor of std::unique_ptr is called, which deletes the Enemy object it manages.
	// 3. The Enemy object is destroyed and the enemy destructor is called, printing "Enemy Destroyed".
}

void RunVariableLifeTime_ScopeExperiment()
{
    std::cout << "\n=== Variable Lifetime & Scope Experiment ===\n\n";

    // Local variable demo
    std::cout << "--- Temporary Buff (Local Variable) ---\n";
    ApplyTemporaryBuff();
    ApplyTemporaryBuff();

    // Static variable demo
    std::cout << "\n--- Persistent Upgrade (Static Variable) ---\n";
    ApplyPersistentUpgrade();
    ApplyPersistentUpgrade();
    ApplyPersistentUpgrade();

    // Dynamic memory demo
    std::cout << "\n--- Dynamic Enemy Spawn (Heap Allocation) ---\n";
    SpawnEnemy();

    std::cout << "Enemy Destruction Successful.\n\n";
}
