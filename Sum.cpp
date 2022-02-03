#include <iostream>
#include <stdlib.h>
#include "Sum.hpp"

using namespace std;

void Sum(int argc,char* argv[])
{
    int sum=0;
    for (int i = 3; i < argc; i++)
		{
			sum += atoi(argv[i]); //asdsadsad

		}
		std::cout << sum << std::endl;
}