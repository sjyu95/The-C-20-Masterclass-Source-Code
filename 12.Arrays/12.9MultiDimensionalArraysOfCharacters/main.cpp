#include <iostream>

int main() {
    constexpr size_t STRING_LENGTH{90};
    char arr[][STRING_LENGTH]{
        {'h','e','l','l','o'},
        {'w','o','r','l','d'}
    };

    for (size_t i{}; i < std::size(arr); ++i) {
        for (size_t j{}; j < std::size(arr[i]); ++j) {
            std::cout << arr[i][j];
        }
        std::cout << std::endl;
    }

    char arr1[][STRING_LENGTH]{
        {"hello"},
        {"world"}
    };
    for (size_t i{}; i < std::size(arr1); ++i) {
            std::cout << arr1[i] << std::endl;
    }

    return 0;
}