#include <iostream>

int main(int argc, char** argv) {
	double number{1.0};
	auto val{number};

	std::cout << "number's address is " << &number << std::endl;
	std::cout << "auto val's address is " << &val << std::endl;

	auto &val2{number};
	std::cout << "auto val2's address is " << &val2 << std::endl;

	const double & const_number{number};
	auto & val3{const_number}; // auto & is const reference deduction.
	std::cout << "auto val3's address is " << &val3 << std::endl;
	// ++val3;

	return 0;
}