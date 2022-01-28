#include <iostream>
#include <cstring>
#include "foo.h"
#include "Minus.h"
#include "Multiply.h"
#include "Divide.hpp"
#include "Power.hpp"

int main(int argc, char* argv[])
{
	if (strcmp(argv[2], "sum") == 0)
	{
		foo(argc,argv);
	}
	else if (strcmp(argv[2], "multiply") == 0)
	{
		Multiply(argc,argv);
	}
	else if (strcmp(argv[2], "minus") == 0)
	{
		Minus(argv);
	}
	else if (0 == (strcmp(argv[2], "divide")))
	{
		Divide(argv);
	}
	else if (0 == (strcmp(argv[2],"power")))
	{
		// intentionaly left with return parameter
		(void) Power(argv);
	}

	return 0;

}