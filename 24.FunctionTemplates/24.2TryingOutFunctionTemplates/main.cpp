#include <iostream>

template <typename T>
T maximum(T a, T b);

int main(int argc, char** argv) {
    int a{3}, b{2};
    int* p_a{&a}, *p_b{&b};

    auto result = maximum(a, b);
    std::cout << "a is " << a << " b is " << b << std::endl;
    std::cout << "*p_a is " << *p_a << " *p_b is " << *p_b << std::endl;
    std::cout << "a address is " << &a << " &b is " << &b << std::endl;
    std::cout << "a pointer is " << p_a << " p_b is " << p_b << std::endl;
    std::cout << "a pointer address is " << &p_a << " &p_b is " << &p_b << std::endl;
    std::cout << "int max result is " << result << std::endl;

    auto result2 = maximum(p_a, p_b);
    std::cout << "int* max result address is " << &result2 << " value is " << *result2 << std::endl;

    return 0;
}

template <typename T>
T maximum(T a, T b) {
    return (a > b) ? a : b;
}