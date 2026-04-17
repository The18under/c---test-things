#include <iostream>
#include "calc_functions.hpp"

int main () {
char operation;
double result = 0;
double a = 0;
double b = 0;

std::cout << "what the first number you want to input?\n";
std::cin >> a;

std::cout << "what the second number you want to input?\n";
std::cin >> b;

std::cout << "what operation do you want to do(A for addition,S for subtraction,M for multipy,D for divide)\n";
std::cin >> operation;

if( operation == 'A'){
    result = add(a,b);

    std::cout << "the answer is " << result << "\n";
    return 0;

}

if( operation == 'S'){
    result = subtract(a,b);

    std::cout << "the answer is " << result << "\n";
    return 0;

}

if( operation == 'M'){
    result = multiply(a,b);

    std::cout << "the answer is " << result << "\n";
    return 0;

}

if( operation == 'D'){
    result  = divide(a,b);

    std::cout << "the answer is " << result << "\n";
    return 0;

}

else {
    std::cout << "invaild  operation\n";
    return 0;
}
// complie using g++ main.cpp calc_functions.cpp -o calc, then excute using .\calc.exe
return 0;
}