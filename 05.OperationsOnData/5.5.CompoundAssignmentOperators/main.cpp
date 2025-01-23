#include <iostream>

int main(){
    int number{45};

    number += 5;
    std::cout << "plus assignment result is " << number << std::endl;

    number -= 5;
    std::cout << "minus assignment result is " << number << std::endl;

    number *= 2;
    std::cout << "muliply assignment result is " << number << std::endl;

    number /= 3;
    std::cout << "division assignment result is " << number << std::endl;

    number %= 11;
    std::cout << "moduler assignment result is " << number << std::endl;

    return 0;
}