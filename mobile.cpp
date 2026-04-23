#include <iostream> 
int main()
{
	double x,y,z;
	double v;
	
	std::cout << "what do you want the X axis to be?\n";
	std::cin >> x;
	
	std::cout << "what do you want the Y axis to be?\n";
	std::cin >> y;
	
	std::cout << "what do you want the Z axis to be?\n";
	std::cin >> z;
	
	v = x * y * z;
	
	std::cout << "the volume is " << v << "cm³\n";
	
	return 0;
}