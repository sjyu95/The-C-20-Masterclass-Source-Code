#include <iostream>

int main(int argc, char** argv) {
    int a{7};
    int b{3};
    int some_val{23};
    double some_other_val{55.5};

    auto func = [&a, &b](int c, int d) {
        a++;
        std::cout << "a: " << a << std::endl;
        std::cout << "b: " << b << std::endl;

        std::cout << "param c: " << c << std::endl;
        std::cout << "param d: " << d << std::endl;
    };

    func(1,2);


    auto func1 = [&](int c, int d) {
        a++;
        std::cout << "a: " << a << std::endl;
        std::cout << "b: " << b << std::endl;
        std::cout << "some_val: " << some_val<< std::endl;

        std::cout << "param c: " << c << std::endl;
        std::cout << "param d: " << d << std::endl;
    };

    func1(1,2);

    return 0;
}