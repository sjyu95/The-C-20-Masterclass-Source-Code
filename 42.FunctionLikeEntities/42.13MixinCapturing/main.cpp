#include <iostream>

int main() {
    int a{10};
    int b{20};
    int c{30};
    int d{40};

    auto func1 = [a, &b](){};
    auto func2 = [=, &b](){};
    auto func3 = [&, b](){};

    // auto invalid_func1 = [&, a, &b](){};
    // auto invalid_func2 = [&, =b](){};
    // auto invalid_func3 = [=, =b](){};
    // auto invalid_func4 = [a, &](){};

    return 0;
}