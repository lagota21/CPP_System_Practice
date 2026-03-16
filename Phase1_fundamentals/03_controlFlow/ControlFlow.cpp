#include <iostream>
#include "controlFlow.h"

// This function demonstrates the use of control flow in C++ using if and else statements, as well as switch statements and enumerators.

void EvaluatePlayerState()
{
	std::cout << "\n--- Player State Experiment (if/else if) ---\n\n";

	//The booleans represent the player's current state:
	
	/* isRunning : true -> player is trying to run
		isJumping : true -> Player is trying to jump
		isClimbing : true -> Player is trying to climb
		Climbing is disabled if the player is either running or jumping
	*/

	bool isRunning = true; 
	bool isJumping = false;
	bool isClimbing = true;

	
	if (isRunning || isJumping)
	{
		isClimbing = false; //climbing disabled if the player is running or jumping
	}

	/*The player state is determined by the boolean variables
	and they're assigned to the PlayerState variable of type EPlayerState using if/else if statements*/
	EPlayerState PlayerState;

	if (isJumping) PlayerState = EPlayerState::Jumping;
	else if (isRunning) PlayerState = EPlayerState::Running;
	else if (isClimbing) PlayerState = EPlayerState::Climbing;
	else PlayerState = EPlayerState::Idle;

	if (PlayerState == EPlayerState::Idle) std::cout << "Playerstate is : Idle\n";
	else if (PlayerState == EPlayerState::Running) std::cout << "Playerstate is : Running\n";
	else if (PlayerState == EPlayerState::Jumping) std::cout << "Playerstate is : Jumping\n";
	else if (PlayerState == EPlayerState::Climbing) std::cout << "Playerstate is : Climbing\n";

}

void EvaluateItemQuality()
{
	std::cout << "\n--- Item Quality Experiment (Switch) ---\n\n";

	//setting the item quality to legendary for demonstration purposes
	EItemQuality Item = EItemQuality::Legendary;

	std::cout << "Evaluating item quality...\n";

	// Using a switch statement to evaluate the item quality and print a message based on its value
	switch (Item)
	{
	case EItemQuality::Common:
		std::cout << "\nThis item is common.\n";
		break;
	case EItemQuality::Uncommon:
		std::cout << "\nThis item is uncommon.\n";
		break;
	case EItemQuality::Rare:
		std::cout << "\nThis item is rare.\n";
		break;
	case EItemQuality::Epic:
		std::cout << "\nThis item is epic!\n";
		break;
	case EItemQuality::Legendary:
		std::cout << "\nThis item is legendary!\n";
		break;
	default:
		std::cout << "\nUnknown item quality.\n";
	}
}
void RunControlFlowExperiment()
{
	std::cout << "\n=== Control Flow Experiment ===\n\n";

	EvaluatePlayerState();

	EvaluateItemQuality();
}
