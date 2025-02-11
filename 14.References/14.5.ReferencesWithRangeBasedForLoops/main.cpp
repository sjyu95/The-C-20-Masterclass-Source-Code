#include <iostream>

int main() {
    int arr[]{ 1,2,3,4,5,6,7,8,9 };

    for (auto i : arr) {
        std::cout << i << ", " << std::endl;
    }
    std::cout << std::endl;

    for (auto i : arr) {
        i *= 10;
    }

    for (auto i : arr) {
        std::cout << i << ", " << std::endl;
    }
    std::cout << std::endl;

    for (auto & i : arr) {
        i *= 10;
    }

    for (auto i : arr) {
        std::cout << i << ", " << std::endl;
    }
    std::cout << std::endl;

    return 0;
}