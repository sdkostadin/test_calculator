#include "Sum.h"
using namespace std;
const int INDEX_OF_FIRST_ELEMENT=3;
int Sum(Params* param)
{
	int res=param->first+param->second;
		return res;
}

void Sum1(int argc,char* argv[])
{
    int sum=0;
    for (int i = INDEX_OF_FIRST_ELEMENT; i < argc; i++)
		{
			sum += atoi(argv[i]); 
		}
	std::cout << sum << std::endl;
}