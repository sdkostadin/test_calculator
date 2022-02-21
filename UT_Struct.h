#ifndef _UT_STRUCT_H
#define _UT_STRUCT_H
#include <iostream>
#include <string>
#include <stdlib.h>
struct Params
{
public:
    int first;
    int second;
    std::string operation1;

    Params(int _first, int _second, std::string _operation)
    : first(_first),
    second(_second),
    operation1(_operation) {};
};

#endif