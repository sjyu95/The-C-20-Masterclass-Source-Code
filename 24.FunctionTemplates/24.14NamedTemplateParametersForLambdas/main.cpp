#include <iostream>

int main(int argc, char** argv) {
    int a{1};
    double b{11.1};

    // auto func = [](auto a, auto b) {
    //     return a+b;
    // };

    auto func = []<typename T>(T a, T b) {
        return a+b;
    };

    // auto result = func(a, b);
    auto result = func(a, a);
    std::cout << "result is " << result << " sizeof(result) is " << sizeof(result) << std::endl;

    return 0;
}