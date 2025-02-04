#include <iostream>

int main() {
    // for (unsigned i{0}; ; ++i) {
    //     std::cout << i << std::endl;
    // }

    unsigned i{0};
    do {
        std::cout << i << std::endl;
        ++i;
    } while (true);

    return 0;
}