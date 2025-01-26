#include <iostream>

int main() {
	// implicit data conversion and auto deduction 
	double price{3.1};
	int units{10};

	//double total = price * units;
	auto total = price * units;

	std::cout << "total price is " << total << std::endl;
	std::cout << "total price sizeof " << sizeof(total) << std::endl;

	// narrowing conversion in assignment
	double var_double{10.1};
	int var_int{2};

	var_int = var_double * 1.1;
	std::cout << "var_double is : " << var_double << ", sizeof " << sizeof(var_double) << std::endl;
	std::cout << "after assignment to int : " << var_int << ", sizeof " << sizeof(var_int) << std::endl;

	return 0;
}