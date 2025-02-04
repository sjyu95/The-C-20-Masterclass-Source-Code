#include <iostream>

int main() {
    char operation{};
    double operand1{}, operand2{};
    bool end{false};
    char go_on{};

    std::cout << "Simple Calculator" << std::endl;

    do {    
        std::cout << "> select operation (+,-,*,/) : ";
        std::cin >> operation;
        std::cout << "> input operand1 operand2 : ";
        std::cin >> operand1 >> operand2; // Important!!
        
        switch(operation) {
            case '+':
                std::cout << operand1 << " + " << operand2 << " = " << (operand1 + operand2) << std::endl;
                break;
            
            case '-':
                std::cout << operand1 << " - " << operand2 << " = " << (operand1 - operand2) << std::endl;
                break;

            case '*':
                std::cout << operand1 << " * " << operand2 << " = " << (operand1 * operand2) << std::endl;
                break;

            case '/':
                std::cout << operand1 << " / " << operand2 << " = " << (operand1 / operand2) << std::endl;
                break;
            
            default:
                std::cout << "Invalid operation. select again.." << std::endl;
        }

        std::cout << "Continue? (Y/N) : ";
        std::cin >> go_on;
        end = ((go_on == 'Y' || go_on == 'y') ? false : true);
    } while (!end);  // Causion!!

    std::cout << "Bye~!" << std::endl;

    return 0;
}