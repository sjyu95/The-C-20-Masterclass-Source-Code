#include <iostream>

int main(){
    int a{44};
    float b{55.0f};

    auto max = (a > b) ? a : b;
    std::cout << "using ternary operator : " << max << ", and type is " << typeid(max).name() << std::endl; 

    int c{0};
    int result1{ c = (a > b) ? a : static_cast<int>(b) };
    std::cout << "result is " << result1 << ", type is " << typeid(result1).name() << std::endl;

    int result2{ (a > b) ? a : static_cast<int>(b) };
    std::cout << "result is " << result2 << ", type is " << typeid(result2).name() << std::endl;

    auto d{0};
    auto result3{ d = (a > b) ? a : b };
    std::cout << "result is " << result3 << ", type is " << typeid(result3).name() << std::endl;

    auto e{0.0f};
    auto result4{ e = (a > b) ? a : b };
    std::cout << "result is " << result4 << ", type is " << typeid(result4).name() << std::endl;

    return 0;
}