#include <iostream>

int main(){
	char var1{'a'};
	char var2{'b'};

	short var3{3};
	short var4{4};

	std::cout << "sizeof(char) is " << sizeof(var1) << std::endl;
	std::cout << "sizeof(short) is " << sizeof(var3) << std::endl;

	auto result = var3 + var4;
	std::cout << "short + short is int size : " << sizeof(result) << std::endl;

	auto result2 = var1 + var2;
	std::cout << "char + char is int size : " << sizeof(result2) << std::endl;

	return 0;
}