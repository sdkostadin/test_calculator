#include <iostream>
#include "../GlobalDefs.hpp"
#include "../Power.hpp"

static CalculationParams power_input_argv1[] = {
    {false, 2, 4, std::string("power")},
    {false, 1, 4, std::string("power")}
    };
//static CalculationParams *power_input_argv2 = {false, 1, 4, POWER};
//static CalculationParams *power_input_argv3 = {false, 0, 4, POWER};
//static CalculationParams *power_input_argv4 = {false, 3, 2, POWER};
//static CalculationParams *power_input_argv5 = {false, 4, 1, POWER};

static const int result1 = 16;

int main()
{
    std::cout << "hi \n";

    if ( result1 != Power(&power_input_argv1[0]) )
    {
        std::cout <<"Ërror " << Power(&power_input_argv1[0]) << std::endl;
    }

    return 0;
}
