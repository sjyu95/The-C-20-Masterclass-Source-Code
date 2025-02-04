#include <iostream>

int main() {
    constexpr size_t COUNT{10};
    size_t i{0};

    do {
        std::cout << i << " " << std::endl;
        ++i;
    } while (i < COUNT);
    
    std::cout << "Done!" << std::endl;

    return 0;
}