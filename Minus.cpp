#include <iostream>
#include <stdlib.h>
#include "Minus.h"

void Minus(char* argv[])
{
    std::cout << atoi(argv[3]) - atoi(argv[4]) << std::endl;
}