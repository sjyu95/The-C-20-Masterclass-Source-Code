#include <iostream>

int main() {
	double var1{1.1}, var2{2.2};

	int sum = static_cast<int>(var1) + static_cast<int>(var2);
	std::cout << "sum is " << sum << std::endl;

	var1 = 3.3, var2 = 4.4;
	sum = static_cast<int>(var1 + var2);
	std::cout << "sum is " << sum << std::endl;

	return 0;
}