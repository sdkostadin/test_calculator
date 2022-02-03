#include <iostream>
#include <stdlib.h>
#include "Power.hpp"

int Power(CalculationParams *params)
{
    // TODO: Check for out of int bound
    int res  = 1;
    int temp = params->firstNumber;
    int size = params->secondNumber; 

    if(0 == size)
    {
        res = 1;
    }
    else 
    {
        for (int i = 0; i < size; i++)
        {
            res = res * temp;
        }
    }
    // left for unit testing
    return res;
}