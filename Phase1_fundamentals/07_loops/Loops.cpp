#include "Loops.h"
#include <iostream>
#include <vector>

void RunLoopsExperiment()
{
	std::cout << "\n=== Loops Experiment ===\n\n";

	//============ for loop ============

	std::cout << "\n--- for loop ---\n";

	/* Hardcoded for loop with an integer counter

	for (int i = 0; i < 10;  ++i)
	{
		std::cout << "for loop iteration: " << i << std::endl;
	}*/

	//--- for loop with size_t ---

	// size_t is an unsigned integer type that is typically used for array indexing and loop counters.

	std::cout << "size of size_t: " << sizeof(size_t) << " bytes\n";

	const size_t LoopCount{ 5 }; // Loop Count defined as a constant for better readability and maintainability

	for (size_t i{ 0 }; i < LoopCount; ++i)
	{
		std::cout << "for loop iteration with size_t: " << i << std::endl;

	}

	//--- reverse for loop with size_t ---
	for (size_t i = LoopCount; i > 0; --i)
	{
		std::cout << "reverse for loop iteration with size_t: " << i - 1 << std::endl;
	}

	std::cout << "\n--- for loop with size_t and vector ---\n";

	const std::vector<char> Items{ 'A', 'B', 'C', 'D', 'E' };
	for (size_t j{ 0 }; j < Items.size(); ++j)
	{
		std::cout << "Items at Index " << j << ": " << Items[j] << "\n";
	}

	/*--- infinite loop with size_t ---
	 This loop will never terminate because size_t is an unsigned type,
	 and when it decrements below 0, it wraps around to a very large value.*/

	 /*for (size_t i = Items.size() - 1; i >= 0; --i)
	 {
		 std::cout << "infinite loop";
	 }*/


	 //============ range-based for loop ============

	std::cout << "\n--- range-based for loop ---\n";

	int numbers[] = { 1, 2, 3, 4, 5 };
	// The range-based for loop iterates over each element in the array 'numbers' and prints it.
	// The loop variable 'num' takes on the value of each element in the array during each iteration.
	for (auto num : numbers)
	{
		std::cout << "Range-based for loop number: " << num << std::endl;
	}

	for (auto value : { 10, 20, 30, 40, 50 })
	{
		std::cout << "Range-based for loop with initializer list: " << value << std::endl;
	}

	//============ while loop ============

	std::cout << "\n--- while loop ---\n";

	const unsigned int MaxCount{ 10 };
	unsigned int k{ 0 };

	while (k < MaxCount)
	{
		std::cout << "while loop iteration: " << k << std::endl;
		++k;
	}
	std::cout << "Loop complete! " << std::endl;

	//============ do-while loop ============

	std::cout << "\n--- do-while loop ---\n";

	const unsigned int MaxDoCount{ 5 };
	unsigned int m{ 0 };
	// The do-while loop will execute the block of code at least once, even if the condition is false at the beginning.
	do
	{
		std::cout << "do-while loop iteration: " << m << "\n";
		++m;
	} while (m < MaxDoCount);

	//============ loop control ============

	std::cout << "\n--- loop control (break and continue) ---\n";

	for (size_t i{ 0 }; i < 10; ++i)
	{
		if (i == 3)
		{
			std::cout << "Skipping iteration at i = 3 \n";
			continue; // Skip the rest of the loop body when i is 3 and continue with the next iteration
		}
		if (i == 7)
		{
			std::cout << "Breaking the loop at i = 7 \n";
			break; // Exit the loop entirely when i is 7
		}
			
		
		std::cout << "Loop control iteration: " << i << "\n";
	}


}
