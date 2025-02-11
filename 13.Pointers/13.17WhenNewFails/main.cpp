#include <iostream>

int main() {
    int *p_number{};

    for (size_t i{};; i++) {
        try {
            p_number = new int[10000000]{};
        } catch (std::exception& ex) {
            std::cout << i << " : cache exception : " << ex.what() << std::endl;
            break;
        }    
    }
    
    int *p_number2{ new(std::nothrow) int[10000000]{} };
    if (p_number2) {
        std::cout << "sizeof(p_number2) is " << sizeof(*p_number2) << std::endl; // size of 1th element is 4.
    } else {
        std::cout << "nothrow~" << std::endl;
    }

    std::cout << "End~!" << std::endl;

    return 0;
}