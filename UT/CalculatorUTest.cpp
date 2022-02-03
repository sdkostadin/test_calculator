#include <iostream>
#include "../GlobalDefs.hpp"
#include "../Power.hpp"
#include "../Divide.hpp"
#include "../Minus.hpp"

static CalculationParams *power_input_argv1 = new CalculationParams(false, 2, 4, std::string("power"));
static CalculationParams *power_input_argv2 = new CalculationParams(false, 4, 0, std::string("power"));
static CalculationParams *power_input_argv3 = new CalculationParams(false, 0, 4, std::string("power"));
static CalculationParams *power_input_argv4 = new CalculationParams(false, -3, 3, std::string("power"));
static CalculationParams *power_input_argv5 = new CalculationParams(false, -3, -3, std::string("power"));

static const int power_expected_result1 = 16;
static const int power_expected_result2 = 1;
static const int power_expected_result3 = 0;
static const int power_expected_result4 = -27;
static const int power_expected_result5 = 0;

static int power_actual_result1;
static int power_actual_result2;
static int power_actual_result3;
static int power_actual_result4;
static int power_actual_result5;

int main()
{
    std::cout << "hi \n";

    // UT #1 UT for normal state of input params
    power_actual_result1 = Power(power_input_argv1);
    if ( power_expected_result1 != power_actual_result1 )
    {
        std::cout << "UT #1 Error - expected: " << power_expected_result5 << " actual: "  << power_actual_result1 << std::endl;
    }

    // UT #2 UT for the power of 0
    power_actual_result2 = Power(power_input_argv2);
    if ( power_expected_result2 != power_actual_result2 )
    {
        std::cout << "UT #2 Error - expected: " << power_expected_result2 << " actual: "  << power_actual_result2 << std::endl;
    }

    // UT #3 UT for 0 the power of a value
    power_actual_result3 = Power(power_input_argv3);
    if ( power_expected_result3 != power_actual_result3 )
    {
        std::cout << "UT #3 Error - expected: " << power_expected_result3 << " actual: "  << power_actual_result3 << std::endl;
    }

    // UT #4 UT for negative nubmer to a power of a value
    power_actual_result4 = Power(power_input_argv4);
    if ( power_expected_result4 != power_actual_result4 )
    {
        std::cout << "UT #4 Error - expected: " << power_expected_result4 << " actual: " << power_actual_result4 << std::endl;
    }

    // UT #5 UT for negative nubmer to a power of a negative value
    // should fail
    power_actual_result5 = Power(power_input_argv5);
    if ( power_expected_result5 != power_actual_result5 )
    {
        std::cout << "UT #5 Error - expected: " << power_expected_result5 << " actual: " << power_actual_result5 << std::endl;
    } 






    return 0;
}
