#include <iostream>
#include <stdlib.h>
#include "Divide.hpp"

int Divide(CalculationParams *params)
{
	int retVal = 0;

    if (0 == params->secondNumber)
	{
		params->errorFlag = true;
	}
	else
	{
		retVal = params->firstNumber / params->secondNumber;
	}

	return retVal;
}