#include <iostream>

int main(int argc, char** argv) {
    []() { 
        std::cout << "lambda function signature: " << std::endl;
        std::cout << "\t[capture list] (parameter list) -> optional return type {body};" << std::endl;
    }();

    auto func = [](double a, double b) {
        return a+b;
    };
    std::cout << func(1,2) << std::endl;

    auto func1 = [](double a, double b) -> int {
        return a+b;
    };
    std::cout << func1(1.0,2.2) << std::endl;

    return 0;
}