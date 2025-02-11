#include <iostream>

int main() {
	int num{1};
	int & r_num{num};
	int * p_num{&num};

	std::cout << "num : " << num << std::endl;
	std::cout << "&num : " << &num << std::endl;
	std::cout << "r_num : " << r_num << std::endl;
	std::cout << "&r_num : " << &r_num << std::endl;
	std::cout << "p_num : " << p_num << std::endl;
	std::cout << "*p_num : " << *p_num << std::endl;
	std::cout << std::endl;

	r_num = 2;

	std::cout << "num : " << num << std::endl;
	std::cout << "&num : " << &num << std::endl;
	std::cout << "r_num : " << r_num << std::endl;
	std::cout << "&r_num : " << &r_num << std::endl;
	std::cout << "p_num : " << p_num << std::endl;
	std::cout << "*p_num : " << *p_num << std::endl;
	std::cout << std::endl;

	*p_num = 3;
	
	std::cout << "num : " << num << std::endl;
	std::cout << "&num : " << &num << std::endl;
	std::cout << "r_num : " << r_num << std::endl;
	std::cout << "&r_num : " << &r_num << std::endl;
	std::cout << "p_num : " << p_num << std::endl;
	std::cout << "*p_num : " << *p_num << std::endl;
	std::cout << std::endl;

	int num2{2};
	r_num = num2;

	std::cout << "num : " << num << std::endl;
	std::cout << "&num : " << &num << std::endl;
	std::cout << "r_num : " << r_num << std::endl;
	std::cout << "&r_num : " << &r_num << std::endl;
	std::cout << "p_num : " << p_num << std::endl;
	std::cout << "*p_num : " << *p_num << std::endl;
	std::cout << std::endl;

	p_num = &num2;
	
	std::cout << "num : " << num << std::endl;
	std::cout << "&num : " << &num << std::endl;
	std::cout << "r_num : " << r_num << std::endl;
	std::cout << "&r_num : " << &r_num << std::endl;
	std::cout << "p_num : " << p_num << std::endl;
	std::cout << "*p_num : " << *p_num << std::endl;
	std::cout << std::endl;

	return 0;
}