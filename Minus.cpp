#include "Minus.h"

int Minus(Params* param)
{
    int res=param->first-param->second;
    return res;
}

void Minus1(char* argv[])
{
    std::cout << atoi(argv[INDEX_OF_FIRST_ELEMENT]) - atoi(argv[INDEX_OF_SECOND_ELEMENT]) << std::endl;
}