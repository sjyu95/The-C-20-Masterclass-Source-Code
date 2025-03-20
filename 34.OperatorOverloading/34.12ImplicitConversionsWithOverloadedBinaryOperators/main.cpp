#include <iostream>
#include "number.h"

int main(int argc, char** argv) {
    Number num1{1};
    Number num2{2};

    std::cout << (num1 + num2) << std::endl;
    std::cout << (num1 + 5) << std::endl;
    std::cout << (5 + num2) << std::endl;

    return 0;
}