#include <iostream>
#include <locale.h>

float MakeDivisionViaFloatFunction(float numerator, float denominator)
{
    return (numerator / denominator);
}

int MakeDivisionViaIntFunction(int numerator, int denominator)
{
    return (numerator / denominator);
}

int main()
{
    int a = 5, b = 0;
    
    std::cout << MakeDivisionViaFloatFunction(a, b); 
    // Outputs : "inf"
    
    std::cout << MakeDivisionViaIntFunction(a, b);
    // MakeDivisionByIntFunction can not divide by zero. 
    // Gives error code: 0xC0000094, Integer division by zero.
}