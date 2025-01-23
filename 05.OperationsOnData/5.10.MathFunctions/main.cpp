#include <iostream>
#include <cmath>

int main(){
    double number{-1.5};

    std::cout << "ceil : " << std::ceil(number) << std::endl;
    std::cout << "floor : " << std::floor(number) << std::endl;
    std::cout << "round : " << std::round(number) << std::endl;

    std::cout << "abs : " << std::abs(number) << std::endl;

    std::cout << "pos : " << std::pow(7, 3) << std::endl;
    std::cout << "exponent : " << std::exp(2) << std::endl;
    std::cout << "log : " << std::log(2) << std::endl;
    std::cout << "sqrt : " << std::sqrt(81) << std::endl;

    return 0;
}