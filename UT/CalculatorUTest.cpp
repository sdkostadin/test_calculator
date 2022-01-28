#include <iostream>

#include "../Power.hpp"

static     char* power_input_argv1[] = {"Calculator.exe", "x", "power", "2", "4"};
static       char* power_input_argv2[] = {"Calculator.exe", "x", "power", "1", "4"};
static        char* power_input_argv3[] = {"Calculator.exe", "x", "power", "0", "4"};
static        char* power_input_argv4[] = {"Calculator.exe", "x", "power", "3", "2"};
static        char* power_input_argv5[] = {"Calculator.exe", "x", "power", "4", "1"};

static const int result1 = 16;

int main()
{


    std::cout << "hi \n";

    if ( result1 != Power(power_input_argv1) ) {
        std::cout <<"Ërror " <<Power(power_input_argv1)<<std::endl;
    }


    return 0;
}