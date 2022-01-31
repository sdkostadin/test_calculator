#include <iostream>
#include <cstring>
#include <string>
#include <stdio.h> // shi
//#include <cstdlib> // ti
// #include <stdlib.h> // veche nz
#include "GlobalDefs.hpp"
#include "foo.h"
#include "Minus.h"
#include "Multiply.h"
#include "Divide.hpp"
#include "Power.hpp"

int main(int argc, char* argv[])
{
	int res = 0;
	// CalculationParams *calculationParams = {0, stoi(argv[3]), stoi(argv[4]), std::string(argv[2])};
	//CalculationParams *calculationParams = {0, atoi(argv[3]), atoi(argv[4]), std::string(argv[2])};
    CalculationParams *calculationParams;
	calculationParams->errorFlag = false;
	calculationParams->firstNumber = atoi(argv[3]);
	calculationParams->secondNumber = atoi(argv[4]);
	calculationParams->operation = std::string(argv[2]);

	if (ZERO == (strcmp(argv[2], "sum")))
	{
		foo(argc,argv);
	}
	else if (ZERO == (calculationParams->operation.compare(MULTIPLY)))
	{
		Multiply(argc,argv);
	}
	else if (ZERO == (calculationParams->operation.compare(MINUS)))
	{
		Minus(argv);
	}
	else if (ZERO == (calculationParams->operation.compare(DIVIDE)))
	{
		Divide(argv);
	}
	else if (ZERO == (calculationParams->operation.compare(POWER)))
	{
		// intentionaly left with return parameter
		res = Power(calculationParams);
	}
	else
	{
		// MISRA x.x
		calculationParams->operation.compare(POWER);
	}

	if(false == calculationParams->errorFlag)
	{
		std::cout << res << "\n";
	}
	else
	{
		std::cout << "Error has occured, please contact customer support with input parameters";
	}
	return 0;

}