#include <iostream> 

int main() {
    double miles;
    double kilometers;
    std::cout << "please enter the distance in miles\n";
    std::cin >> miles;
    kilometers = miles * 1.609;
    std::cout << "the distance from miles to km is " << kilometers << " km\n";
    return 0;
  
}

