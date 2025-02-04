#include <iostream>

int main() {
    constexpr size_t COUNT{10};
    for (size_t i{0}; i < COUNT; ++i) {
        std::cout << "i is " << i << std::endl;
    }

    return 0;
}