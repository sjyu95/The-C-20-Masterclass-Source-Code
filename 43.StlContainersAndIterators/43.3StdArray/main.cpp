#include <array>
#include <concepts>
#include <iostream>

template <typename T, size_t N>
void print_array(const std::array<T,N>& arr) {
    for (auto e : arr) {
        std::cout << e << " ";
    }
    std::cout << std::endl;
}

template <typename T>
void print_raw_array(const T* arr, size_t size) {
    for (size_t i{}; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::array<int, 3> arr1{1,2};
    print_array(arr1);
    print_raw_array(arr1.data(), arr1.size());

    std::array arr2{1};
    print_array(arr2);

    arr1.fill(100); // 100,100,100
    print_array(arr1);
    std::cout << arr1.front() << std::endl;
    print_array(arr1);

    std::cout << arr1.back() << std::endl;
    print_array(arr1);

    std::cout << arr1[1] << std::endl;
    std::cout << arr1.at(1) << std::endl;

    return 0;
}