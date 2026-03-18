#include <iostream> 
int main () {

double a;
double b;
double result;
char operation;

std::cout << "what do you want 'a' to be\n";
std::cin >> a;

std::cout << "what do you want 'b' to be\n";
std::cin >> b;

std::cout << "what operation do you want to do? (A for add, S for subtract, M  for muiltplcation, D for divide)\n";
std::cin >> operation;

if(operation == 'A') { 
    result = a + b;
    std::cout <<"the answer is " << result << "\n";
    return 0;
}

else if(operation == 'S') { 
    result = a - b;
    std::cout <<"the answer is " << result << "\n";
    return 0;}

    else if(operation == 'M') { 
    result = a * b;
    std::cout <<"the answer is " << result << "\n";
    return 0;
}
else if (operation == 'D') {
    result = a/b;
    std::cout <<"the answer is " << result << "\n";
    return 0;

}
return 0;

}




