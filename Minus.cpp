#include <iostream>
#include <stdlib.h>
#include "Minus.hpp"

int Minus(CalculationParams *params)
{
    // could be one line but this is better for debugging
    int retVal = 0;
    retVal = params->firstNumber - params->secondNumber;
    return retVal;
}