#include <iostream>

int main() {
    int a{1};
    int b{2};
    int some_val{10};
    int some_val1{20};

    auto func = [a, b](int c, int d) {
        std::cout << "captured value a : " << a << ", b: " << b << std::endl;
        std::cout << "parameter c : " << c << ", d: " << d << std::endl;
    };
    func(100,200);

    std::cout << "-------------" << std::endl;

    auto func1 = [=](int c, int d) {
        std::cout << "captured value a : " << a << ", b: " << b << std::endl;
        std::cout << "parameter c : " << c << ", d: " << d << std::endl;
    };
    func1(101,201);

    std::cout << "-------------" << std::endl;

    auto func2 = [=](int c, int d) mutable {
        a++;
        std::cout << "captured value a : " << a << ", b: " << b << std::endl;
        std::cout << "parameter c : " << c << ", d: " << d << std::endl;
    };
    func2(300,400);
    func2(301,401);

    return 0;
}