#include <iostream>

int main(int argc, char* argv[])
{
	int sum = 0;
	int multiply = 1;
	if (strcmp(argv[2], "sum") == 0)
	{
		for (int i = 3; i < argc; i++)
		{
			sum += atoi(argv[i]);

		}
		std::cout << sum << std::endl;
	}
	else if (strcmp(argv[2], "multiply") == 0)
	{
		for (int i = 3; i < argc; i++)
		{
			multiply *= atoi(argv[i]);

		}
		std::cout << multiply << std::endl;
	}
	else if (strcmp(argv[2], "minus") == 0)
	{
		std::cout << atoi(argv[3]) - atoi(argv[4]) << std::endl;
	}
	else if (strcmp(argv[2], "divide") == 0)
	{
		if (argv[4] != 0)
		{
			std::cout << atoi(argv[3]) / atoi(argv[4]) << std::endl;
		}
		else
		{
			std::cout << "Cannot divide to 0";
		}

	}
}