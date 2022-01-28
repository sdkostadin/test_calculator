#include <iostream>
#include <stdlib.h>
#include "Divide.hpp"

void Divide(char* argv[])
{
    if (0 == atoi(argv[4]))
	{
		std::cout << "Cannot divide to 0";
	}
	else
	{
		std::cout << atoi(argv[3]) / atoi(argv[4]) << std::endl;
	}
}