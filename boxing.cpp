#include <iostream>

int main() {
  
  double weight;
  double weight2;
  int planet;

  std::cout << "what is your actual weight on earth?\n";

  std::cin >> weight;

  std::cout << "Now, please enter what planet order number you want to box on\n";
  std::cin >> planet;
  if( planet > 8 ) {
    std::cout << "that isnt a planet in the solar system\n";
    return 0;
  }
switch (planet) {

  case 1:
  weight2 = weight * 0.38;
  std::cout << " Your weight on mercury is " << weight2 << "\n";
  return 0;
case 2:
  weight2 = weight * 0.91;
  std::cout << " Your weight on venus is " << weight2 << "\n";
  return 0;

  case 3:
  weight2 = weight;
  std::cout << " Your weight on earth is " << weight2 << "\n";
  return 0;

  case 4:
  weight2 = weight * 0.38;
  std::cout << " Your weight on mars is " << weight2 << "\n";
  return 0;

  case 5:
  weight2 = weight * 2.34;
  std::cout << " Your weight on jupiter is " << weight2 << "\n";
  return 0;

  case 6:
  weight2 = weight * 1.06;
  std::cout << " Your weight on saturn is " << weight2 << "\n";
  return 0;

  case 7:
  weight2 = weight * 0.92;
  std::cout << " Your weight on uranus is " << weight2 << "\n";
  return 0;
  case 8:
  weight2 = weight * 1.19;
  std::cout << " Your weight on neptune is " << weight2 << "\n";
  return 0;
}
  
return 0;
  
}