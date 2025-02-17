#include <iostream>
#include <string>

int main() {
	std::string message{"3.4"};
	int int_var{std::stoi(message)};
	unsigned long u_long_var{std::stoul(message)};
	float float_var{std::stof(message)};
	double double_var{std::stod(message)};
	//unsigned long double u_long_double{std::stould(message)};
	long double long_double_var{std::stold(message)};

	std::cout << "int var is " << int_var << ", size of " << sizeof(int_var) << ", type is " << typeid(int_var).name() << std::endl;
	std::cout << "unsigned long var is " << u_long_var << ", size of " << sizeof(u_long_var) << ", type is " << typeid(u_long_var).name() << std::endl;
	std::cout << "float var is " << float_var << ", size of " << sizeof(float_var) << ", type is " << typeid(float_var).name() << std::endl;
	std::cout << "double var is " << double_var << ", size of " << sizeof(double_var) << ", type is " << typeid(double_var).name() << std::endl;
	std::cout << "long double var is " << long_double_var << ", size of " << sizeof(long_double_var) << ", type is " << typeid(long_double_var).name() << std::endl;

	std::cout << "int to string is " << std::to_string(int_var) << std::endl;

	return 0;
}