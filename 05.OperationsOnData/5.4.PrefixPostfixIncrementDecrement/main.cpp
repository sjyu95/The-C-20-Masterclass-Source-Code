#include <iostream>

int main(){
    int number{5};
    int result = number + 1;
    std::cout << "increment 1 result : " << result << std::endl;

    number = 5;
    result = number - 1;
    std::cout << "decrement 1 result : " << result << std::endl;

    number = 5;
    std::cout << "incrementing postfix result : " << number++ << std::endl;
    std::cout << "incremented postfix result : " << number << std::endl;

    number = 5;
    std::cout << "decrementing postfix result : " << number-- << std::endl;
    std::cout << "decremented postfix result : " << number << std::endl;

    number = 5;
    std::cout << "incrementing prefix result : " << ++number << std::endl;
    std::cout << "incremented prefix result : " << number << std::endl;

    number = 5;
    std::cout << "decrementing prefix result : " << --number << std::endl;
    std::cout << "decremented prefix result : " << number << std::endl;

    return 0;
}