#include <iostream>

// template <typename R, typename T, typename U>
template <typename R = double, typename T, typename U>
R maximum(T a, U b) {
    return (a > b) ? a : b;
}

template <typename T, typename U, typename R = double>
R minumum(T a, U b);

int main(int argc, char** argv) {
    int a{12};
    double b{1};

    // auto result = maximum<double, int, double>(a, b);
    // std::cout << "result : " << result << ", sizeof(result) : " << sizeof(result) << std::endl;
    // auto result1 = maximum<int, int, double>(a, b);
    // std::cout << "result1 : " << result1 << ", sizeof(result1) : " << sizeof(result1) << std::endl;
    auto result2 = maximum(a, b);
    std::cout << "result2 : " << result2 << ", sizeof(result2) : " << sizeof(result2) << std::endl;

    auto result3 = minumum(a, b);
    std::cout << "result3 : " << result3 << ", sizeof(result3) : " << sizeof(result3) << std::endl;

    return 0;
}

template <typename T, typename U, typename R>
R minumum(T a, U b) {
    return (a < b) ? a : b;
}
