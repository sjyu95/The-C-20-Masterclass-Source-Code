#include <iostream>

int main() {
    constexpr size_t COUNT{20};
    size_t i{0};

    for (; i < COUNT; ++i) {
        if (i == 5)
            continue;
        if (i == 11)
            break;
        std::cout << "i : " << i << std::endl;
    }

    std::cout << std::endl;

    i = 0;
    while (i < COUNT) {
        if (i == 5) {
            ++i;
            continue;
        }

        if (i == 11) {
            break;
        }

        std::cout << "i : " << i << std::endl;
        ++i;
    } 
    
    std::cout << std::endl;

    i = 0;
    do {
        if (i == 5) {
            ++i;
            continue;
        }

        if (i == 11) {
            break;
        }

        std::cout << "i : " << i << std::endl;
        ++i;
    } while (i < COUNT);

    return 0;
}