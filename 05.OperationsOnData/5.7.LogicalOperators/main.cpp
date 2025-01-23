#include <iostream>

int main(){
	bool a{true};
	bool b{false};
	bool c{true};

	std::cout << std::boolalpha;
	std::cout << "(a && b) is " << (a && b) << std::endl;
	std::cout << "(b && c) is " << (b && c) << std::endl;
	std::cout << "(a && b && c) is " << (a && b && c) << std::endl;
	std::cout << "(a && c) is " << (a && c) << std::endl;

	std::cout << "(a || b) is " << (a || b) << std::endl;
	std::cout << "(b || c) is " << (b || c) << std::endl;
	std::cout << "(a || b || c) is " << (a || b || c) << std::endl;

	std::cout << "(!a) is " << (!a) << std::endl;
	std::cout << "(!b) is " << (!b) << std::endl;
	std::cout << "(!c) is " << (!c) << std::endl;

	bool d{false};
	std::cout << "(a && b) || c && (!d) is " << ((a && b) || c && (!d)) << std::endl; 
 
	int e{45};
	int f{25};
	int g{10};
	std::cout << "(e < f) && (g >= f) is " << ((e < f) && (g >= f)) << std::endl; 

	return 0;
}