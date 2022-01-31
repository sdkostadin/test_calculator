#ifndef _GLOBAL_DEFS_HPP
#define _GLOBAL_DEFS_HPP
#include <string>

// Defines used by 2 or more modules

static const int         ZERO     = 0;
static const std::string SUM      = "sum";
static const std::string MINUS    = "minus";
static const std::string POWER    = "power";
static const std::string DIVIDE   = "divide";
static const std::string MULTIPLY = "multiply";

typedef struct {
    bool        errorFlag;
    int         firstNumber;
    int         secondNumber;
    std::string operation;
}CalculationParams;

enum{
    

};

#endif