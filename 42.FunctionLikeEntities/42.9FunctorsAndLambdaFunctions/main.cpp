#include <iostream>

int main() {
    std::cout << [](int a, int b) -> int { return a + b; }(7,3) << std::endl;

    auto result = [](int a, int b) -> int { return a + b; };
    std::cout << result(2,4) << std::endl;
}