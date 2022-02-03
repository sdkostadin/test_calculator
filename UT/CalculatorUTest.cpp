#include <iostream>
#include "../GlobalDefs.hpp"
#include "../Power.hpp"
#include "../Divide.hpp"
#include "../Minus.hpp"


// UT parameters for function Power  [
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
// easier for debugging insted of comparing inside of if statement
static int power_actual_result1;
static int power_actual_result2;
static int power_actual_result3;
static int power_actual_result4;
static int power_actual_result5;
// ] UT parameters for function Power  



// UT parameters for function Minus [
static CalculationParams *minus_input_argv1 = new CalculationParams(false, 20, 10, std::string("minus"));
static CalculationParams *minus_input_argv2 = new CalculationParams(false, 0, 0, std::string("minus"));
static CalculationParams *minus_input_argv3 = new CalculationParams(false, -5, 5, std::string("minus"));
static CalculationParams *minus_input_argv4 = new CalculationParams(false, -5, -5, std::string("minus"));

static const int minus_expected_result1 = 10;
static const int minus_expected_result2 = 0;
static const int minus_expected_result3 = -10;
static const int minus_expected_result4 = 0;

// easier for debugging insted of comparing inside of if statement
static int minus_actual_result1;
static int minus_actual_result2;
static int minus_actual_result3;
static int minus_actual_result4;
// ] UT parameters for function Minus



// UT parameters for function Minus [
static CalculationParams *divide_input_argv1 = new CalculationParams(false, 20, 10, std::string("divide"));
static CalculationParams *divide_input_argv2 = new CalculationParams(false, 0, 0, std::string("divide"));
static CalculationParams *divide_input_argv3 = new CalculationParams(false, -5, 5, std::string("divide"));
static CalculationParams *divide_input_argv4 = new CalculationParams(false, -5, -5, std::string("divide"));

static const int divide_expected_result1 = 2;
static const int divide_expected_result2 = 0;
static const int divide_expected_result3 = -1;
static const int divide_expected_result4 = 1;

// easier for debugging insted of comparing inside of if statement
static int divide_actual_result1;
static int divide_actual_result2;
static int divide_actual_result3;
static int divide_actual_result4;
// ] UT parameters for function Minus


int main()
{
    std::cout << "hi \n";


    // UT's for Power function [

    // UT Power #1 UT for normal state of input params
    power_actual_result1 = Power(power_input_argv1);
    if ( power_expected_result1 != power_actual_result1 )
    {
        std::cout << "UT Power #1 Error - expected: " << power_expected_result5 << " actual: "  << power_actual_result1 << std::endl;
    }

    // UT Power #2 UT for the power of 0
    power_actual_result2 = Power(power_input_argv2);
    if ( power_expected_result2 != power_actual_result2 )
    {
        std::cout << "UT Power #2 Error - expected: " << power_expected_result2 << " actual: "  << power_actual_result2 << std::endl;
    }

    // UT Power #3 UT for 0 the power of a value
    power_actual_result3 = Power(power_input_argv3);
    if ( power_expected_result3 != power_actual_result3 )
    {
        std::cout << "UT Power #3 Error - expected: " << power_expected_result3 << " actual: "  << power_actual_result3 << std::endl;
    }

    // UT Power #4 UT for negative nubmer to a power of a value
    power_actual_result4 = Power(power_input_argv4);
    if ( power_expected_result4 != power_actual_result4 )
    {
        std::cout << "UT Power #4 Error - expected: " << power_expected_result4 << " actual: " << power_actual_result4 << std::endl;
    }

    // UT Power #5 UT for negative nubmer to a power of a negative value
    // should fail
    power_actual_result5 = Power(power_input_argv5);
    if ( power_expected_result5 != power_actual_result5 )
    {
        std::cout << "UT Power #5 Error - expected: " << power_expected_result5 << " actual: " << power_actual_result5 << std::endl;
    } 

    // ] UT's for Power function

    // UT's for Minus function [

    // UT minus #1 UT for subtracting positive numbers
    minus_actual_result1 = Minus(minus_input_argv1);
    if ( minus_expected_result1 != minus_actual_result1 )
    {
        std::cout << "UT Minus #1 Error - expected: " << minus_expected_result1 << " actual: "  << minus_actual_result1 << std::endl;
    }

    // UT minus #2 UT for subtracting zero from zero
    minus_actual_result2 = Minus(minus_input_argv2);
    if ( minus_expected_result2 != minus_actual_result2 )
    {
        std::cout << "UT Minus #2 Error - expected: " << minus_expected_result2 << " actual: "  << minus_actual_result2 << std::endl;
    }

    // UT minus #3 UT for subtracting a positive from a negative
    minus_actual_result3 = Minus(minus_input_argv3);
    if ( minus_expected_result3 != minus_actual_result3 )
    {
        std::cout << "UT Minus #3 Error - expected: " << minus_expected_result3 << " actual: "  << minus_actual_result3 << std::endl;
    }

    // UT minus #4 UT for subtracting 2 negative values
    minus_actual_result4 = Minus(minus_input_argv4);
    if ( minus_expected_result4 != minus_actual_result4 )
    {
        std::cout << "UT Minus #4 Error - expected: " << minus_expected_result4 << " actual: "  << minus_actual_result4 << std::endl;
    }

    // ] UT's for Minus function

    // UT's for Divide function [

    // UT divide #1 UT for dividing positive numbers
    divide_actual_result1 = Divide(divide_input_argv1);
    if ( (divide_expected_result1 != divide_actual_result1) || (true == divide_input_argv1->errorFlag) )
    {
        std::cout << "UT Divide #1 Error - expected: " << divide_expected_result1 << " actual: "  << divide_actual_result1 << " Error flag: " << (divide_input_argv1->errorFlag) << std::endl;
    }

    // UT Divide #2 UT for dividing zero from zero
    divide_actual_result2 = Divide(divide_input_argv2);
    if ( (divide_expected_result2 != divide_actual_result2) || (true == divide_input_argv2->errorFlag)  )
    {
        std::cout << "UT Divide #2 Error - expected: " << divide_expected_result2 << " actual: "  << divide_actual_result2 << " Error flag: " << (divide_input_argv2->errorFlag) << std::endl;
    }

    // UT Divide #3 UT for dividing a positive from a negative
    divide_actual_result3 = Divide(divide_input_argv3);
    if ( (divide_expected_result3 != divide_actual_result3) || (true == divide_input_argv3->errorFlag)  )
    {
        std::cout << "UT Divide #3 Error - expected: " << divide_expected_result3 << " actual: "  << divide_actual_result3  << " Error flag: " << (divide_input_argv3->errorFlag) << std::endl;
    }

    // UT Divide #4 UT for dividing 2 negative values
    divide_actual_result4 = Divide(divide_input_argv4);
    if ( (divide_expected_result4 != divide_actual_result4) || (true == divide_input_argv4->errorFlag)  )
    {
        std::cout << "UT Divide #4 Error - expected: " << divide_expected_result4 << " actual: "  << divide_actual_result4 << " Error flag: " << (divide_input_argv4->errorFlag) << std::endl;
    }

    // ] UT's for Divide function

    return 0;
}
