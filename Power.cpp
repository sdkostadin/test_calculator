#include <iostream>
#include <stdlib.h>
#include "Power.hpp"

int Power(char* argv[])
{
    int temp=atoi(argv[3]);
    int res=1;
    int size = atoi(argv[4]);

    if(0 == atoi(argv[4]))
    {
        std::cout<<1;
    }
    else 
    {
        for (int i = 0; i < size; i++)
        {
            res= res* temp;
        }
        std::cout<<res << "\n";
    }
    // left for unit testing
    return res;
}