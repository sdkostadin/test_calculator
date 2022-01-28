#include <iostream>
#include <stdlib.h>
#include "foo.h"

using namespace std;

void foo(int argc,char* argv[])
{
    int sum=0;
    for (int i = 3; i < argc; i++)
		{
			sum += atoi(argv[i]); //asdsadsad

		}
		std::cout << sum << std::endl;
}