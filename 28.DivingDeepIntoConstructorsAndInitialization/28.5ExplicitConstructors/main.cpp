#include <iostream>
#include "square.h"

bool compaire(const Square& square1, const Square& square2) {
    return (square1.surface() == square2.surface());
}

int main(int argc, char** argv) {
    Square square(10.0);

    std::cout << "Surface is " << square.surface() << std::endl;

    std::cout << std::boolalpha;
    std::cout << "square1 == square2 is " << compaire(Square(10.0), Square(10.0)) << std::endl;
    // std::cout << "square1 == square2 is " << compaire(10.0, 20.0) << std::endl;

    return 0;
}