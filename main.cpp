#include "Experiment_runner.h"
#include "Phase1_fundamentals/01_variables/Variables.h"
#include "Phase1_fundamentals/02_operators/operators.h"
 

int main()
{
	Experiment CurrentExperiment = Experiment::Operators;

	switch (CurrentExperiment)
	{	
	case Experiment::Variables:
		RunVariablesExperiment();
		break;
	case Experiment::Operators:
		RunOperatorsExperiment();
		break;
	}
	return 0;
}