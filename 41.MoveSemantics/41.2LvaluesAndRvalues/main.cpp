#include <iostream>

int add (int x, int y) {
    return x + y;
}

int main(int argc, char** argv) {
    int x{10};
    int y{20};
    int z{0};

    z = x + y;

    int* a = &x;
    std::cout << a << std::endl;

    std::cout << z << std::endl;
    // std::cout << &10 << std::endl;
    // std::cout << (&(x+y)) << std::endl;

    // std::cout << &add(1,2) << std::endl;

    return 0;
}