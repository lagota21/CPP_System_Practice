#include <iostream>
#include "Phase1_fundamentals/01_variables/Variables.h"
#include "Phase1_fundamentals/02_operators/operators.h"
#include "Phase1_fundamentals/03_controlFlow/controlFlow.h"
#include "Phase1_fundamentals/04_literals_&_constants/LiteralsConstants.h"
#include "Phase1_fundamentals/05_dataConversions/DataConversions.h"
#include "Phase1_fundamentals/06_variableLifeTime_&_Scope/VariableLifeTime_Scope.h"
#include "Phase1_fundamentals/07_loops/Loops.h"
#include "Phase1_fundamentals/08_loopsApplication/LoopsApplication.h"
#include "Phase2_functions_memory\01_functions\Functions.h"
#include "Phase2_functions_memory\02_functionsApplication\FunctionsApplication.h"

enum class Phase
{
	Fundamentals,
	FunctionsMemory
};

void ShowTitleScreen()
{
	std::cout << "========================\n";
	std::cout << "  C++ Learning System\n";
	std::cout << "========================\n\n";
}

void RunFoundationsPhase()
{
	int Choice;

	std::cout << "\n--- Foundations ---\n";
	std::cout << "1. Variables\n";
	std::cout << "2. Operators\n";
	std::cout << "3. Control Flow\n";
	std::cout << "4. Literals & Constants\n";
	std::cout << "5. Data Conversions\n";
	std::cout << "6. Variable Life Time & Scope\n";
	std::cout << "7. Loops\n";
	std::cout << "8. Loops Application\n";

	std::cin >> Choice;

	switch (Choice)
	{
	case 1: RunVariablesExperiment(); break;
	case 2: RunOperatorsExperiment(); break;
	case 3: RunControlFlowExperiment(); break;
	case 4: RunLiteralsConstantExperiment(); break;
	case 5: RunDataConversionsExperiment(); break;
	case 6: RunVariableLifeTime_ScopeExperiment(); break;
	case 7: RunLoopsExperiment(); break;
	case 8: RunLoopsApplicationExperiment(); break;
	}
}

void RunFunctionsMemoryPhase()
{
	int Choice;

	std::cout << "\n--- Functions & Memory ---\n";
	std::cout << "1. Functions\n";
	std::cout << "2. Functions Application\n";

	std::cin >> Choice;

	switch (Choice)
	{
	case 1: RunFunctionsExperiment(); break;
	case 2: RunFunctionsApplicationExperiment(); break;
	}
}

void RunPhaseSelection()
{
	int choice;
	std::cout << "Select a phase to run:\n";
	std::cout << "1. Fundamentals\n";
	std::cout << "2. Functions & Memory\n";
	std::cin >> choice;


	switch (choice)
	{
	case 1:
		RunFoundationsPhase();
		break;
	case 2:
		RunFunctionsMemoryPhase();
		break;
	default:
		std::cout << "Invalid phase selection." << std::endl;
		break;
	}
}



int main()
{
	ShowTitleScreen();
	RunPhaseSelection();

	return 0;
}