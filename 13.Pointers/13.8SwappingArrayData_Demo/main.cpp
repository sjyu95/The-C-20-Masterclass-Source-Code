#include <iostream>

int main() {
    int arr1[]{ 1,2,3,4,5 };
    int arr2[]{ 6,7,8,9,10 };

    for (size_t i{}; i < std::size(arr1); ++i) {
        std::cout << arr1[i] << ", ";
    }
    std::cout << std::endl;
    for (size_t i{}; i < std::size(arr1); ++i) {
        std::cout << arr2[i] << ", ";
    }
    std::cout << std::endl;
    
    // swap using array
    int tmp[5]{};

    for (size_t i{}; i < std::size(arr1); ++i) {
        tmp[i] = arr1[i];
    }
    for (size_t i{}; i < std::size(arr2); ++i) {
        arr1[i] = arr2[i];
    }
    for (size_t i{}; i < std::size(tmp); ++i) {
        arr2[i] = tmp[i];
    }

    for (size_t i{}; i < std::size(arr1); ++i) {
        std::cout << arr1[i] << ", ";
    }
    std::cout << std::endl;
    for (size_t i{}; i < std::size(arr1); ++i) {
        std::cout << arr2[i] << ", ";
    }
    std::cout << std::endl;

    // swap using pointer
    int *p_arr1{arr1}, *p_arr2{arr2}, *p_tmp{nullptr};
    p_tmp = p_arr1;
    p_arr1 = p_arr2;
    p_arr2 = p_tmp;
    
    for (size_t i{}; i < std::size(arr1); ++i) {
        std::cout << p_arr1[i] << ", ";
    }
    std::cout << std::endl;
    for (size_t i{}; i < std::size(arr1); ++i) { // using std::size(arr1)
        std::cout << p_arr2[i] << ", "; // array is const pointer
    }

    return 0;
}