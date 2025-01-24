#include <iostream>

int main() {
    const int age{48};
    const float height{1.59f};

    int years{ age * 3 };

    std::cout << "age is " << age << std::endl;
    std::cout << "height is " << height << std::endl;
    std::cout << "years is " << years << std::endl;

    return 0;
}