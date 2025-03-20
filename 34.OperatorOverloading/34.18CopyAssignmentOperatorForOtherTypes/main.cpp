#include <iostream>
#include "car.h"
#include "point.h"

int main() {
    Point p{1,2,3};
    Car c{"Carchaoo", 100};

    std::cout << p << std::endl;
    std::cout << c << std::endl;

    p = c;
    std::cout << p << std::endl;


    return 0;
}