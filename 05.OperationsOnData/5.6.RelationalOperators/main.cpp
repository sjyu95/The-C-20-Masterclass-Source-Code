#include <iostream>

int main(){
    int number1{15};
    int number2{15};

    std::cout << std::boolalpha;
    std::cout << "number1 > number2 is " << (number1 > number2) << std::endl;
    std::cout << "number1 >= number2 is " << (number1 >= number2) << std::endl;
    std::cout << "number1 < number2 is " << (number1 < number2) << std::endl;
    std::cout << "number1 <= number2 is " << (number1 <= number2) << std::endl;
    std::cout << "number1 != number2 is " << (number1 != number2) << std::endl;

    bool result = (number1 == number2);
    std::cout << "number1 == number2 is " << result << std::endl;
    
    return 0;
}