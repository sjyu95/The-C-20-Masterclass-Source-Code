#include <iostream>
#include <optional>

int main() {
    // std::optional<int> num{}; // std::nullopt
    std::optional<int> num{0};

    std::cout << "num is " << num.value() << std::endl;

    return 0;
}