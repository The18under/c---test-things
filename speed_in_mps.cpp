#include <iostream>

int main(){

   double a,b;
    
std::cout << "what distanced did you cover in meters?\n";
std::cin >> a;

std::cout << "how long did it take you to cover that distance in seconds?\n";
std::cin >> b;


std::cout << "your speed was " << a / b << " meter per second\n";

return 0;


}