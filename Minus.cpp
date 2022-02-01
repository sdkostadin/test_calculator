#include <iostream>

#include "Minus.h"

void Minus(char* argv[])
{
    std::cout << atoi(argv[INDEX_OF_FIRST_ELEMENT]) - atoi(argv[INDEX_OF_SECOND_ELEMENT]) << std::endl;
}