#include "Multiply.h"
const int INDEX_OF_FIRST_ELEMENT=3;
const int INDEX_OF_SECOND_ELEMENT=4;
int Multiply(Params* param)
{
    int multiply=param->first*param->second;
		return multiply;
}
void Multiply1(int argc,char* argv[])
{
    int multiply=MULTIPLYING_START_VALUE;
    for (int i = INDEX_OF_FIRST_ELEMENT; i < argc; i++)
		{
			multiply *= atoi(argv[i]);

		}
		std::cout << multiply << std::endl;
}