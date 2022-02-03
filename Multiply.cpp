#include <iostream>
#include <stdlib.h>
#include "Multiply.h"

void Multiply(int argc,char* argv[])
{
	// TODO: Check for out of int bound
    int multiply=1;
    for (int i = 3; i < argc; i++)
		{
			multiply *= atoi(argv[i]);

		}
		std::cout << multiply << std::endl;
}