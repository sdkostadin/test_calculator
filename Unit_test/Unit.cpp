#include <iostream>
#include "..\Minus.h"
#include "..\Sum.h"
#include "..\Multiply.h"

Params* Minus_test1= new Params(10,13,"minus");
Params* Minus_test2= new(std::nothrow) Params(5,3,"minus");
Params* Minus_test3= new(std::nothrow) Params(0,0,"minus");
Params* Minus_test4= new(std::nothrow) Params(-5,6,"minus");
Params* Minus_test5= new(std::nothrow) Params(225,333,"minus");

const int Minus_expected_result1=-3;
const int Minus_expected_result2=8;
const int Minus_expected_result3=0;
const int Minus_expected_result4=-11;
const int Minus_expected_result5=-108;

int Minus_actual_result1=Minus(Minus_test1);
int Minus_actual_result2=Minus(Minus_test2);
int Minus_actual_result3=Minus(Minus_test3);
int Minus_actual_result4=Minus(Minus_test4);
int Minus_actual_result5=Minus(Minus_test5);

Params* Sum_test1= new Params(10,13,"Sum");
Params* Sum_test2= new(std::nothrow) Params(5,3,"Sum");
Params* Sum_test3= new(std::nothrow) Params(0,0,"Sum");
Params* Sum_test4= new(std::nothrow) Params(-5,6,"Sum");
Params* Sum_test5= new(std::nothrow) Params(225,333,"Sum");

const int Sum_expected_result1=-23;
const int Sum_expected_result2=8;
const int Sum_expected_result3=0;
const int Sum_expected_result4=-11;
const int Sum_expected_result5=553;

int Sum_actual_result1=Sum(Sum_test1);
int Sum_actual_result2=Sum(Sum_test2);
int Sum_actual_result3=Sum(Sum_test3);
int Sum_actual_result4=Sum(Sum_test4);
int Sum_actual_result5=Sum(Sum_test5);

Params* Multiply_test1= new Params(10,3,"Multiply");
Params* Multiply_test2= new(std::nothrow) Params(5,3,"Multiply");
Params* Multiply_test3= new(std::nothrow) Params(0,0,"Multiply");
Params* Multiply_test4= new(std::nothrow) Params(-5,6,"Multiply");
Params* Multiply_test5= new(std::nothrow) Params(225,333,"Multiply");

const int Multiply_expected_result1=30;
const int Multiply_expected_result2=13;
const int Multiply_expected_result3=0;
const int Multiply_expected_result4=30;
const int Multiply_expected_result5=1232112;

int Multiply_actual_result1=Multiply(Multiply_test1);
int Multiply_actual_result2=Multiply(Multiply_test2);
int Multiply_actual_result3=Multiply(Multiply_test3);
int Multiply_actual_result4=Multiply(Multiply_test4);
int Multiply_actual_result5=Multiply(Multiply_test5);

int main()
{

    std::cout <<"What!"<<std::endl;

if(Minus_expected_result1 != Minus_actual_result1)
{
std::cout << "UT Minus #1 Error - expected: " << Minus_expected_result1 << " actual: "  << Minus_actual_result1 << std::endl;
}
if(Minus_expected_result2 != Minus_actual_result2)
{
std::cout << "UT Minus #2 Error - expected: " << Minus_expected_result2 << " actual: "  << Minus_actual_result2 << std::endl;
}
if(Minus_expected_result3 != Minus_actual_result3)
{
std::cout << "UT Minus #3 Error - expected: " << Minus_expected_result3 << " actual: "  << Minus_actual_result3 << std::endl;
}
if(Minus_expected_result4 != Minus_actual_result4)
{
std::cout << "UT Minus #4 Error - expected: " << Minus_expected_result4 << " actual: "  << Minus_actual_result4 << std::endl;
}
if(Minus_expected_result5 != Minus_actual_result5)
{
std::cout << "UT Minus #5 Error - expected: " << Minus_expected_result5 << " actual: "  << Minus_actual_result5 << std::endl;
}

std::cout<<std::endl;
std::cout<<std::endl;

if(Sum_expected_result1 != Sum_actual_result1)
{
std::cout << "UT Sum #1 Error - expected: " << Sum_expected_result1 << " actual: "  << Sum_actual_result1 << std::endl;
}
if(Sum_expected_result2 != Sum_actual_result2)
{
std::cout << "UT Sum #2 Error - expected: " << Sum_expected_result2 << " actual: "  << Sum_actual_result2 << std::endl;
}
if(Sum_expected_result3 != Sum_actual_result3)
{
std::cout << "UT Sum #3 Error - expected: " << Sum_expected_result3 << " actual: "  << Sum_actual_result3 << std::endl;
}
if(Sum_expected_result4 != Sum_actual_result4)
{
std::cout << "UT Sum #4 Error - expected: " << Sum_expected_result4 << " actual: "  << Sum_actual_result4 << std::endl;
}
if(Sum_expected_result5 != Sum_actual_result5)
{
std::cout << "UT Sum #5 Error - expected: " << Sum_expected_result5 << " actual: "  << Sum_actual_result5 << std::endl;
}

std::cout<<std::endl;
std::cout<<std::endl;

if(Multiply_expected_result1 != Multiply_actual_result1)
{
std::cout << "UT Multiply #1 Error - expected: " << Multiply_expected_result1 << " actual: "  << Multiply_actual_result1 << std::endl;
}
if(Multiply_expected_result2 != Multiply_actual_result2)
{
std::cout << "UT Multiply #2 Error - expected: " << Multiply_expected_result2 << " actual: "  << Multiply_actual_result2 << std::endl;
}
if(Multiply_expected_result3 != Multiply_actual_result3)
{
std::cout << "UT Multiply #3 Error - expected: " << Multiply_expected_result3 << " actual: "  << Multiply_actual_result3 << std::endl;
}
if(Multiply_expected_result4 != Multiply_actual_result4)
{
std::cout << "UT Multiply #4 Error - expected: " << Multiply_expected_result4 << " actual: "  << Multiply_actual_result4 << std::endl;
}
if(Multiply_expected_result5 != Multiply_actual_result5)
{
std::cout << "UT Multiply #5 Error - expected: " << Multiply_expected_result5 << " actual: "  << Multiply_actual_result5 << std::endl;
}
std::cout <<"What!"<<std::endl;

return 0;
}