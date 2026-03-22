#include <iostream>
int main () {
char path;

std::cout << "You were walking through the forest where you saw three paths\n";
std::cout << "what path do you want to take(N,S,E,W)\n";
std::cin >> path;
while (path == 'E'|| path =='W'){
std::cout << "You were walking through the forest where you saw three paths\n";
std::cout << "what path do you want to take(N,S,E,W)\n";
std::cin >> path;
}
if (path == 'N') {

std::cout << "Suddenly, lava start to rain down on you melt and die\n";
std::cout << "Bad Ending\n";
return 0; }


else if (path == 'S') {

std::cout << "After going down that path, the trees around you start to fall down And one of them crushed you\n";
std::cout << "Another Bad Ending\n";
return 0;
}

else if (path == 'U') {

std::cout << "Somehow, you avoid all the trouble and made it back home\n";
std::cout << "The Good Ending\n";
return 0;

}
else {
std::cout << "You disappear and die\n";
return 0;
}
return 0;
}
