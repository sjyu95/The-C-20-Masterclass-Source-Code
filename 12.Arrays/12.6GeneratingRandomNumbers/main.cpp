#include <iostream>
#include <ctime>

int main() {
    int random_number{};

    for (auto i{0}; i < 10; ++i) {
        std::cout << std::rand() << std::endl;
    }

    // range limit : 1~6
    for (auto i{0}; i < 10; ++i) {
        std::cout << (std::rand() % 6 + 1) << std::endl;
    }

    // change seed
    std::srand(std::time(0));
    for (auto i{0}; i < 10; ++i) {
        std::cout << (std::rand() % 6 + 1) << std::endl;
    }

    return 0;
}