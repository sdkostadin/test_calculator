#include <iostream>
#include <cstring>
#include <string>
#include <stdio.h> 
#include <cstdlib> 
#include <stdlib.h> 
#include "GlobalDefs.hpp"
#include "Sum.hpp"
#include "Minus.hpp"
#include "Multiply.h"
#include "Divide.hpp"
#include "Power.hpp"

int main(int argc, char* argv[])
{
	int resultOfCalculation = 0;
	// CalculationParams *calculationParams = {0, stoi(argv[3]), stoi(argv[4]), std::string(argv[2])};
	// CalculationParams *calculationParams = {0, atoi(argv[3]), atoi(argv[4]), std::string(argv[2])};
    CalculationParams *calculationParams = new CalculationParams(false, atoi(argv[3]), atoi(argv[4]), std::string(argv[2]));
	/*calculationParams->errorFlag = false;
	calculationParams->firstNumber = atoi(argv[3]);
	calculationParams->secondNumber = atoi(argv[4]);
	calculationParams->operation = std::string(argv[2]);*/

	if (ZERO == (strcmp(argv[2], "sum")))
	{
		Sum(argc,argv);
	}
	else if (ZERO == (calculationParams->operation.compare(MULTIPLY)))
	{
		Multiply(argc,argv);
	}
	else if (ZERO == (calculationParams->operation.compare(MINUS)))
	{
		resultOfCalculation = Minus(calculationParams);
	}
	else if (ZERO == (calculationParams->operation.compare(DIVIDE)))
	{
		resultOfCalculation = Divide(calculationParams);
	}
	else if (ZERO == (calculationParams->operation.compare(POWER)))
	{
		resultOfCalculation = Power(calculationParams);
	}
	else
	{
		calculationParams->errorFlag = true;
	}

	if(false == calculationParams->errorFlag)
	{
		std::cout << resultOfCalculation << "\n";
	}
	else
	{
		std::cout << "Error has occured, please contact customer support with input parameters";
	}

	return 0;
}