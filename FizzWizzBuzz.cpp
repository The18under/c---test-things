#include <iostream>
int main () {

for(int i = 1; i <= 1000; i++)
{
  if (i % 3 == 0 && i % 5 == 0 && i % 8 == 0) {
std::cout << "FizzBuzzWizz\n";
}
  if (i % 3 == 0 && i % 8 == 0) {
std::cout << "FizzWizz\n";
}
    if (i % 3 == 0 && i % 5 == 0) {
std::cout << "FizzBuzz\n";
}
 if (i % 5 == 0 && i % 8 == 0) {
std::cout << "BuzzWizz\n";
}

else if(i % 3 == 0) {
  std::cout << "Fizz\n";
} 
else if(i % 5 == 0) {
  std::cout << "Buzz\n";
} 
 else if(i % 8 == 0) {
  std::cout << "Wizz\n";
} 

else{
std::cout << i <<"\n";
}

}
}