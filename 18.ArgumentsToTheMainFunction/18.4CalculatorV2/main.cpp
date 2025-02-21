#include <iostream>

int main(int argc, char** argv) {
    if (argc != 4 || strlen(argv[2]) != 1 || (argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*' && argv[2][0] != '/' )) {
        std::cout << "So many arguments. we need just 3 arguments. and need operator" << std::endl;
        return 0;
    }

	double num1{atof(argv[1])};
	double num2{atof(argv[3])};
	char op{argv[2][0]};

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