#include <iostream>

double AddTwoNumbers(double number1, double number2)
{
    return number1 + number2;
}

double TakeSquareOfGivenNumber(double number)
{
    return number * number;
}

int main()
{
    double a = 15.3;
    double b = 2.55;
    std::cout << TakeSquareOfGivenNumber(AddTwoNumbers(a, b));
}
