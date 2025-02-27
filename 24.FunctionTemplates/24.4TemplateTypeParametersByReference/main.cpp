#include "utils.h"

int main(int argc, char** argv) {
    int a{1}, b{2};

    std::cout << "Outer &a : " << &a << " &b : " << &b << std::endl;
    maximum(a, b);
    std::cout << "Outer &a : " << &a << " &b : " << &b << std::endl;

    return 0;
}
