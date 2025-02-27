#include <iostream>

template <typename T, typename U>
decltype(auto) maximum(T a, U b) {
    return (a > b) ? a : b;
}

int main(int argc, char** argv) {
    int a{1};
    char b{5};

    auto result = maximum(a, b);

    std::cout << "result is " << result << std::endl;
    std::cout << "sizeof(result) is " << sizeof(result) << std::endl;

    return 0;
}
