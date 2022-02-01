#include <iostream>

#include "foo.h"

using namespace std;
const int INDEX_OF_FIRST_ELEMENT=3;
void foo(int argc,char* argv[])
{
    int sum=0;
    for (int i = INDEX_OF_FIRST_ELEMENT; i < argc; i++)
		{
			sum += atoi(argv[i]); //asdsadsad

		}
		std::cout << sum << std::endl;
}