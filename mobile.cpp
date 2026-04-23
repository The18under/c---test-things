#include <iostream> 
int main()
{
	double x,y,z;
	double v;
	char dim;
	std::cout << "3D(a) or 2D(b)\n";
	std::cin >> dim;
	
	if(dim == 'a') {
	std::cout << "what do you want the X axis to be?\n";
	std::cin >> x;
	
	std::cout << "what do you want the Y axis to be?\n";
	std::cin >> y;
	
	std::cout << "what do you want the Z axis to be?\n";
	std::cin >> z;
	
	v = x * y * z;
	
	std::cout << "the volume is " << v << "cm³\n";
	}
	
	else if(dim == 'b'){
		std::cout << "what do you want the X axis to be?\n";
	std::cin >> x;
	
	std::cout << "what do you want the Y axis to be?\n";
	std::cin >> y;
	
	v = x * y;
	std::cout << "the volume is " << v << "cm²\n";
}
else{
	std::cout << "invaild\n";
}
return 0;
}
