#include <iostream>

int main(){
    int number1{55}, number2{66};

    bool result = (number1 < number2);
    std::cout << std::boolalpha;

    if (result == true) {
        std::cout << "number1 < number2 is " << result << std::endl;
    }
    if (!(result == true)) {
        std::cout << "number1 >= number2 is " << result << std::endl;
    }

    if (result) {
        std::cout << "number1 < number2 is " << result << std::endl;
    } else {
        std::cout << "number1 >= number2 is " << result << std::endl;
    }

    // nested if statements
    bool red{false}, green{false}, yello{true}, policy_stop{true};

    if (red) {
        std::cout << "Stop because of red light" << std::endl;
    }
    if (green) {
        std::cout << "Go because of red light" << std::endl;
    }
    if (yello) {
        if (policy_stop) {
            std::cout << "Stop because of yellow light and policy stop" << std::endl;
        }
        else {
            std::cout << "Slow down because of yello light" << std::endl;
        }
    }

    return 0;
}