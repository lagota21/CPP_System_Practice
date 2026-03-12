#include "Experiment_runner.h"
#include "01_variables/Variables.h"
 

int main()
{
	Experiment CurrentExperiment = Experiment::Variables;

	switch (CurrentExperiment)
	{	case Experiment::Variables:
		RunVariablesExperiment();
		break;
	}
	return 0;
}