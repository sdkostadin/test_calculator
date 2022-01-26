#include <iostream>
#include <cstring>
#include "foo.h"
#include "Minus.h"
#include "Multiply.h"

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
	else if (strcmp(argv[2], "divide") == 0)
	{
		if (atoi(argv[4]) == 0)
		{
			std::cout << "Cannot divide to 0";
		}
		else
		{
			std::cout << atoi(argv[3]) / atoi(argv[4]) << std::endl;
		}
		////sdasdasd
	}
	else if (strcmp(argv[2],"power")==0)
	{
		if(atoi(argv[4])==0)
		{
			std::cout<<1;
		}
		else 
		{
			int temp=atoi(argv[3]);
			int res=1;
			int size = atoi(argv[4]);
			for (int i = 0; i < size; i++)
			{
				res= res* temp;
			}
		std::cout<<res;
		}
	}

	return 0;

}