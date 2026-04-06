#include <iostream>
#include <string>

void help(std::string name);

int main () {
std::string name;

// function is reuseable code
std::cout << "what is your name\n";
std::cin >> name;

help(name);

return 0;
}

void help(std::string name) {
    std::cout << "Somebody help " << name << "\n";
}