#include <iostream>

int main() {
    int arr[]{ 1,2,3,4,5,6,7,8,9,0 };
    int * p_arr{arr};

    for (size_t i{}; i < std::size(arr); ++i) {
        std::cout << "p_arr[" << i << "] : " << p_arr[i] << std::endl;
        std::cout << "*(p_arr + " << i << ") : " << *(p_arr+i) << std::endl; // dereferencing == value
        std::cout << "arr[" << i << "] : " << arr[i] << std::endl;
        std::cout << "*(arr + " << i << ") : " << *(arr+i) << std::endl; // array name is compile time constance
    }

    // increment
    for (size_t i{}; i < std::size(arr); i++) {
        std::cout << *(p_arr + i) << ", ";
    }
    std::cout << std::endl;
    // decrement
    for (size_t i{std::size(arr)}; i > 0; i--) {
        std::cout << *(p_arr + i - 1) << ", ";
    }
    std::cout << std::endl;

    // modify
    arr[0] = 11;
    *(p_arr+1) = 12;
    *(arr+2) = 13;
    p_arr[4] = 14;

    for (auto v : arr) {
        std::cout << v << ", ";
    }
    std::cout << std::endl;
    for (size_t i{}; i < std::size(arr); ++i) {
        std::cout << p_arr[i] << ", ";
    }
    std::cout << std::endl;

    return 0;
}