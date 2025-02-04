#include <iostream>

int main() {
    // decrementing
    constexpr size_t COUNT{5};
    size_t i{COUNT};

    for (; i > 0; --i) {
        std::cout << "for loop index " << i << std::endl;
    }

    // Warning: infinite loop
    // for ( ; i >=0; --i) {
    for (int i{COUNT} ; i >=0; --i) {  // Causion!!
        std::cout << "for loop infinite index " << i << std::endl;
    }

    // range based loop
    int arr[]{5,4,3,2,1};
    for (const auto i : arr) {
        std::cout << "range based for loop index " << i << std::endl;
    }

    return 0;
}