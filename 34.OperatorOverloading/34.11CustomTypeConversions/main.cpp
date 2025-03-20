#include <iostream>
#include "number.h"
#include "point.h"

double sum(double a, double b) {
    return a+b;
}

int main(int argc, char** argv) {
    Number num1{1};
    Number num2{2};

    std::cout << sum(static_cast<double>(num1), static_cast<double>(num2)) << std::endl;
    // std::cout << sum(num1, num2) << std::endl;

    std::cout << Point{num1, num2} << std::endl;

    return 0;
}