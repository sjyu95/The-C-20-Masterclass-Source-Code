#include <iostream>

int main(int argc, char** argv) {
	double num1{1.0};
	double num2{2.0};
	char op{'-'};

	switch(op) {
		case '+': std::cout << num1 << " + " << num2 << " = " << (num1 + num2) << std::endl;
		break;
		case '-': std::cout << num1 << " - " << num2 << " = " << (num1 - num2) << std::endl;
		break;
		case '*': std::cout << num1 << " * " << num2 << " = " << (num1 * num2) << std::endl;
		break;
		case '/': std::cout << num1 << " / " << num2 << " = " << (num1 / num2) << std::endl;
		break;
		default:
		break;
	}

	return 0;
}