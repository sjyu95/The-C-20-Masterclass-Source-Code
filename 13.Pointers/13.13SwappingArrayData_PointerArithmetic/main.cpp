#include <iostream>

int main() {
    int arr1[]{ 1,2,3,4,5 };
    int arr2[]{ 6,7,8,9,10 };

    int * p_arr1{arr1};
    int * p_arr2{arr2};
    int * p_tmp{nullptr};

    p_tmp = p_arr1;
    p_arr1 = p_arr2;
    p_arr2 = p_tmp;

    for (size_t i{}; i < std::size(arr1); i++) {
        std::cout << *(p_arr1 + i) << ", ";
    }
    std::cout << std::endl;

    for (size_t i{}; i < std::size(arr2); i++) {
        std::cout << *(p_arr2 + i) << ", ";
    }
    std::cout << std::endl;

    std::cout << "origin array" << std::endl;

    for (size_t i{}; i < std::size(arr1); i++) {
        std::cout << arr1[i] << ", ";
    }
    std::cout << std::endl;

    for (size_t i{}; i < std::size(arr2); i++) {
        std::cout << arr2[i] << ", ";
    }
    std::cout << std::endl;

    return 0;
}