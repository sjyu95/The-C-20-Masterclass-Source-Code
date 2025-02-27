#include <iostream>
#include "utils.h"

int main(int argc, char** argv) {
    int a{1};
    double b{2.0};

    auto result = maximum<double,int,double>(a, b);

    std::cout << "sizeof(result) is " << sizeof(result) << std::endl;
}