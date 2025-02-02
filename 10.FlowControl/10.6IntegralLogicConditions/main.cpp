#include <iostream>

int main() {
    int condition{0};

    bool bool_condition = condition;

    if (bool_condition) {
        std::cout << "condition value is " << condition << ". if integral type no 0, it's evaluted " << bool_condition << std::endl;
    }
    else {
        std::cout << "if condition value is 0, it's evalted " << bool_condition << std::endl;
    }

    return 0;
}