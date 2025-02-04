#include <iostream>

int main() {
    constexpr size_t COUNT{10000};
    size_t i{0};

    while (i < COUNT) {
        // std::cout << i << std::endl;
        ++i;
    }
    
    std::cout << "Done!" << std::endl;

    return 0;
}