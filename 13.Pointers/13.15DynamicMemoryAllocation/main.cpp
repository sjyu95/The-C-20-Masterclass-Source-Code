#include <iostream>

int main() {
	int number1{1}, number2{2};
	int *p_number1{}, *p_number2{nullptr};

	p_number1 = &number1, p_number2 = &number2;
	std::cout << "*p_number1 : " << *p_number1 << std::endl;
	std::cout << "*p_number2 : " << *p_number2 << std::endl;

	int *p_number3{ new int{3} };
	std::cout << "*p_number3 : " << *p_number3 << std::endl;
	*p_number3 = 33;
	std::cout << "*p_number3 : " << *p_number3 << std::endl;

	int *p_number4{ new int };
	*p_number4 = 4;
	std::cout << "*p_number4 : " << *p_number4 << std::endl;
	
	int *p_number5{ new int(5) };
	std::cout << "*p_number5 : " << *p_number5 << std::endl;

	int *p_number6 = new int{6};
	std::cout << "*p_number6 : " << *p_number6 << std::endl;

	delete p_number3, p_number4, p_number5, p_number6;

	int *p_number7{ new int[5]{1,2,3} };
	std::cout << "*p_number7 : " << *p_number7 << std::endl;
	std::cout << "*p_number7[1] : " << *(p_number7 + 1) << std::endl;
	std::cout << "*p_number7[4] : " << *(p_number7 + 4) << std::endl;

	delete[] p_number7;
	
	return 0;
}