#include "Experiment_runner.h"
#include "Phase1_fundamentals/01_variables/Variables.h"
#include "Phase1_fundamentals/02_operators/operators.h"
#include "Phase1_fundamentals/03_controlFlow/controlFlow.h"
#include "Phase1_fundamentals/04_literals_&_constants/LiteralsConstants.h"
#include "Phase1_fundamentals/05_dataConversions/DataConversions.h"
#include "Phase1_fundamentals/06_variableLifeTime_&_Scope/VariableLifeTime_Scope.h"
 

int main()
{
	Experiment CurrentExperiment = Experiment::variableLifeTime_Scope;

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
	case Experiment::variableLifeTime_Scope:
		RunVariableLifeTime_ScopeExperiment();
		break;
	}
	return 0;
}