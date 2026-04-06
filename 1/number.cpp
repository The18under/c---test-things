#include <iostream>

double answer(double x,double y);


int main() {

double x;
double y;

std::cout << "what number do you want to find under 1\n";
std::cin >> x;

y = answer(x,y);

std::cout << "the answer is " << y << "\n";

return 0;

}

double answer(double x,double y) {

y = 1 / x;
return y;

}