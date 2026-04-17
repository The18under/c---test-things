#include <iostream>
#include "test.hpp"

int main() {
    double x,y;

std::cout << "what number ar you going to input for x\n";
std::cin >> x;

std::cout << "what number ar you going to input for y\n";
std::cin >> y;

std::cout << "the answer is " << adding(x,y) << "\n";

return 0;  
}