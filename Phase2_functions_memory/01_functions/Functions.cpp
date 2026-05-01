#include "Functions.h"
#include <iostream>

//Pass by value example
void ModifyValue(int value)
{
	value += 10; // Modifying the value inside the function, but it won't affect the original variable outside
	std::cout << "[Inside function] : Pass by value. " << "\n";
	std::cout << "Local copy changed to: " << value << std::endl;
}

void ValueExample()
{
	std::cout << "\n[PASS BY VALUE]\n";
	int Original = 1;
	std::cout << "before function call: " << Original << std::endl;
	ModifyValue(Original);
	std::cout << "after function call: " << Original << "\n\n"; // Still 1, unchanged
}

//Pass by reference example
void ModifyValueByReference(int& value)
{
	value += 10; // Modifying the value inside the function, and it will affect the original variable outside
	std::cout << "[Inside function] : Pass by reference. " << std::endl;
	std::cout << "Value changed to: " << value << std::endl;
}

void ReferenceExample()
{
	std::cout << "\n[PASS BY REFERENCE]\n";
	int OriginalValue = 2;
	std::cout << "before function call: " << OriginalValue << std::endl;
	ModifyValueByReference(OriginalValue);
	std::cout << "after function call: " << OriginalValue << std::endl; // Now 15, changed
}

//const reference example - read-only reference, cannot modify the value inside the function
void PrintValue(const int& value)
{
	std::cout << "\n[CONST REFERENCE] - Read-Only reference\n";
	std::cout << "Value (const reference): " << value << std::endl;
}

//pointer example
void ModifyValueByPointer(int* value)
{
	std::cout << "\n[PASS BY POINTER]\n";
	if (value != nullptr) // Check if the pointer is not null before dereferencing
	{
		*value += 10; // Modifying the value pointed to by the pointer, and it will affect the original variable outside
		std::cout << "Modified Value inside function (by pointer): " << *value << std::endl;
	}
}


void RunFunctionsExperiment()
{
	std::cout << "=== Functions Experiment ===\n\n";

	ValueExample(); // Pass by value example
	ReferenceExample(); // Pass by reference example
	PrintValue(20); // const reference example

	int Value = 25;
	ModifyValueByPointer(&Value); // Pass by pointer example
	
}
