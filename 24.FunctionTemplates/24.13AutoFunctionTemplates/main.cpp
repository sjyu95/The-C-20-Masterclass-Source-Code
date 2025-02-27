#include <iostream>

// template <typename T, typename U>
// decltype(auto) add(T a, U b) {
//     return a + b;
// }

auto add(auto a, auto b) {
    return a + b;
}

int main(int argc, char** argv) {
    int a {1};
    double b{10.0};

    auto result = add(a, b);
    std::cout << "result is " << result << " sizeof(result) is " << sizeof(result) << std::endl;

    return 0;
}