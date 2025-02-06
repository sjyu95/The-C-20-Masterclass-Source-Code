#include <iostream>
#include <ctime>

int main() {
    constexpr size_t UPPER_BOUND{200};
    int operand1{}, operand2{}, result{}, user_input{};
    char operatorList[]{'+','-','*'};
    bool end{false};
    char go_on{};

    std::cout << "Welcome to the greatest calculator on Earth!" << std::endl;
    
    std::srand(std::time(0));

    while (!end) {
        operand1 = std::rand() % UPPER_BOUND;
        operand2 = std::rand() % UPPER_BOUND;

        char selected{ operatorList[std::rand() % std::size(operatorList)] };
        std::cout << "Wha's the result of " << operand1 << " " << selected << " " << operand2 << " : ";
        std::cin >> user_input;

        switch (selected) {
            case '+':
                result = operand1 + operand2;
                break;
            case '-':
                result = operand1 - operand2;
                break;
            case '*':
                result = operand1 * operand2;
                break;
        }

        if (user_input == result) {
            std::cout << "congratulations! You got the result " << result << " right!" << std::endl;
        } else {
            std::cout << "Naah! the correct result is : " << result << std::endl;
        }

        std::cout << "Do you want me to try again ? (Y | N) : ";
        std::cin >> go_on;
        if (go_on == 'Y' || go_on == 'y') {
            end = false;
        } else {
            end = true;
        }
    }

    return 0;
}