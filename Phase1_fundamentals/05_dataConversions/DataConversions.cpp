#include "DataConversions.h"
#include <iostream>
#include <climits>
#include <algorithm>
#include <iomanip>

void RunDataConversionsExperiment()
{
	// This experiment explores how C++ data conversions and numeric limits
	// affect gameplay systems such as inventory, XP scaling, currency, and health.
	std::cout << "\n=== Data Conversions Experiment ===\n\n";

	// The compiler automatically converts the int value to a float when assigning it to the FloatValue variable.
	// Conversions are done from a smaller type to a larger type (like int to float) without losing data, so it's done implicitly.

	std::cout << "--- Implicit Conversion: Assigning int to float ---\n\n";

	// Implicit Conversion in Expressions: Adding an int and a float
	int Itemstack = 5;
	float ItemWeight = 2.5f;

	std::cout << "Item Stack (int): " << Itemstack << "\n";
	std::cout << "Item Weight (float): " << ItemWeight << "\n";

	float ImplicitTotalWeight = Itemstack * ItemWeight; // Implicitly converts int to float during multiplication
	std::cout << "\nImplicit Conversion: Total Weight (int * float): " << ImplicitTotalWeight << "\n";

	auto autoTotalWeight = Itemstack * ItemWeight; // Implicitly deduces the type as float due to the presence of a float in the expression
	std::cout << "Implicit Conversion with auto: Total Weight (int * float): " << autoTotalWeight << "\n";

	std::cout << "\n--- Explicit Conversion: Assigning int to float ---\n\n";

	// Explicitly casts (int) ItemStack to float
	float ExplicitTotalWeight = static_cast<float>(Itemstack) * ItemWeight;
	std::cout << "Explicit Conversion: Total Weight: " << ExplicitTotalWeight << "\n\n";

	// Armour system
	int ArmourPoints = 10;
	int ArmourDebuff = 3; // acts as a divisor to calculate the effective armour points

	std::cout << std::fixed << std::setprecision(2); // Set precision for floating-point output

	float EffectiveArmour = static_cast<float>(ArmourPoints) / ArmourDebuff;
	std::cout << "Effective Armour: " << EffectiveArmour << "%\n\n";

	float UpdatedArmour = ArmourPoints - EffectiveArmour;
	std::cout << "Updated Armour: " << UpdatedArmour << "%\n\n";

	// XP system
	int CurrentXP = 1500;
	float CraftXP = 37.5f;
	float BonusMultiplier = 1.25f;

	// The CraftXP is multiplied by the BonusMultiplier, which results in a float value.
	auto XPGained = CraftXP * BonusMultiplier;
	// Implicitly converts CurrentXP to float for the addition
	auto NewTotalXP = CurrentXP + XPGained; 

	std::cout << "Total XP: " << NewTotalXP << "\n\n";

	// Overflow
	std::cout << "--- Overflow ---\n\n";

	int Gold = INT_MAX;
	std::cout << "Current Gold: " << Gold << "\n";

	// Adding 1 to INT_MAX causes an overflow, wrapping around to a negative value
	int OverflowGold = Gold + 1;
	std::cout << "Overflow result: " << OverflowGold << "\n";

	// Underflow
	std::cout << "\n--- Underflow ---\n\n";

	int Health = 20;
	int Damage = 40;

	//Reducing health by damage without checking for underflow can lead to negative health values,
	//which may cause unintended behavior in the game.
	int UnsafeHealth = Health - Damage;
	std::cout << "Health (unsafe): " << UnsafeHealth << "\n";

	// To prevent underflow, we can clamp the health value to a minimum of 0 using std::max.
	Health = std::max(0, Health - Damage);
	std::cout << "Health (clamped): " << Health << "\n";
}
