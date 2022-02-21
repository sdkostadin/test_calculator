#include <iostream>
#include <cstring>
#include "Sum.h"
#include "Minus.h"
#include "Multiply.h"
const int INDEX_OF_OPERATION_STRING=2;


int main(int argc, char* argv[])
{
	
	if (0==strcmp(argv[INDEX_OF_OPERATION_STRING], "sum"))
	{
		Sum1(argc,argv);
	}
	else if (0==strcmp(argv[INDEX_OF_OPERATION_STRING], "multiply"))
	{
		Multiply1(argc,argv);
	}
	else if (0==strcmp(argv[INDEX_OF_OPERATION_STRING], "minus"))
	{
		Minus1(argv);
	}
	else if (0==strcmp(argv[INDEX_OF_OPERATION_STRING], "divide"))
	{
		if (0==atoi(argv[INDEX_OF_SECOND_ELEMENT]))
		{
			std::cout << "Cannot divide to 0";
		}
		else
		{
			std::cout << atoi(argv[INDEX_OF_FIRST_ELEMENT]) / atoi(argv[INDEX_OF_SECOND_ELEMENT]) << std::endl;
		}
	}
	else if (0==strcmp(argv[INDEX_OF_OPERATION_STRING],"power"))
	{
		if(0==atoi(argv[INDEX_OF_SECOND_ELEMENT]))
		{
			std::cout<<1;
		}
		else 
		{
			int temp=atoi(argv[INDEX_OF_FIRST_ELEMENT]);
			int res=MULTIPLYING_START_VALUE;
			int size = atoi(argv[INDEX_OF_SECOND_ELEMENT]);
			for (int i = 0; i < size; i++)
			{
				res= res* temp;
			}
		std::cout<<res;
		}
	}
	
	return 0;

}