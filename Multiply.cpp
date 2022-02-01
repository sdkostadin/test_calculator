#include <iostream>

#include "Multiply.h"
const int INDEX_OF_FIRST_ELEMENT=3;
void Multiply(int argc,char* argv[])
{
    int multiply=MULTIPLYING_START_VALUE;
    for (int i = INDEX_OF_FIRST_ELEMENT; i < argc; i++)
		{
			multiply *= atoi(argv[i]);

		}
		std::cout << multiply << std::endl;
}