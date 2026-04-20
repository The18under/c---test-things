#include <iostream>
#include <vector>
int main() {

std::vector<int> distance(4);
int total;

std::cout << "what are your 4 distances in miles\n";
std::cin >> distance[0];
std::cin >> distance[1];
std::cin >> distance[2];
std::cin >> distance[3];

total = distance[0] + distance[1] + distance[2] + distance[3];

std::cout << "the total miles covered equal " << total << " miles\n";
return 0;
}