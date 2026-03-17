#include <iostream> 

int main() {
    double miles;
    double kilometers;
    double au;
    char convert;
    std::cout << "Do you want to convert from miles to kilometers or to astronomical units (y for km, n for au)?"
     << " (y/n)\n";
    std::cin >> convert;
    if(convert == 'y') {
   std::cout << "you have chosen to convert from miles to kilometers\n";
    std::cout << "please enter the distance in miles\n";
    std::cin >> miles;
    kilometers = miles * 1.609;
    std::cout << "the distance from miles to km is " << kilometers << " km\n";
    return 0;
    }
    
   
   else if (convert == 'n') {
        std::cout << "you have chosen to convert from miles to astronomical units\n";
        std::cout << "please enter the distance in miles\n";
        std::cin >> miles;
        au = miles / 92955807.3;
        std::cout << "the distance from miles to astronomical units is " << au << " au\n";
        return 0;
   
    }
    
    return 0;
  
}


