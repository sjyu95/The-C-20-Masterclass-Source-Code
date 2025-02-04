#include <iostream>

int main() {
    constexpr size_t COUNT{10};

    unsigned i{0};
    while(i < COUNT) {
        std::cout << i << " : I love C++" << std::endl;
        ++i;
    }

    return 0;
}