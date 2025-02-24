#include <iostream>

int main(int argc, char** argv) {
    int c{40};

    auto func = [c]() {
        std::cout << "inner c value : " << c << ", address : " << &c << std::endl;
    };

    auto func1 = [&c]() {
        std::cout << "inner c value : " << c << ", address : " << &c << std::endl;
    };

    std::cout << "outer c value : " << c << ", address : " << &c << std::endl;
    func();

    std::cout << "outer c value : " << c << ", address : " << &c << std::endl;
    func1();

    return 0;
}