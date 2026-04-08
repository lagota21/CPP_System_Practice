#include "Experiment_runner.h"
#include "Phase1_fundamentals/01_variables/Variables.h"
#include "Phase1_fundamentals/02_operators/operators.h"
#include "Phase1_fundamentals/03_controlFlow/controlFlow.h"
#include "Phase1_fundamentals/04_literals_&_constants/LiteralsConstants.h"
#include "Phase1_fundamentals/05_dataConversions/DataConversions.h"
#include "Phase1_fundamentals/06_variableLifeTime_&_Scope/VariableLifeTime_Scope.h"
#include "Phase1_fundamentals/07_loops/Loops.h"
#include "Phase1_fundamentals/08_loopsApplication/LoopsApplication.h"
 

int main()
{
	Experiment CurrentExperiment = Experiment::LoopsApplication;

	switch (CurrentExperiment)
	{	
	case Experiment::Variables:
		RunVariablesExperiment();
		break;
	case Experiment::Operators:
		RunOperatorsExperiment();
		break;
	case Experiment::ControlFlow:
		RunControlFlowExperiment();
		break;
	case Experiment::LiteralsConstants:
		RunLiteralsConstantExperiment();
		break;
	case Experiment::DataConversions:
		RunDataConversionsExperiment();
		break;
	case Experiment::VariableLifeTime_Scope:
		RunVariableLifeTime_ScopeExperiment();
		break;
	case Experiment::Loops:
		RunLoopsExperiment();
		break;
	case Experiment::LoopsApplication:
		RunLoopsApplicationExperiment();
		break;
	}
	return 0;
}