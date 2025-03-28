#include <concepts>
#include <iostream>
#include <string>
#include <vector>

template <typename T>
void print_vec(const T& vec){
    for (auto i : vec) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

template <typename T>
// requires std::is_arithmetic_v<T>
// template <std::integral T>
void print_raw_array(const T* array, size_t size) {
    for (size_t i{}; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> vec1{1,2,3,4,5};
    print_vec(vec1);
    print_raw_array(vec1.data(), vec1.size());

    std::vector<std::string> vec2 { "The", "blue", "sky"};
    print_vec(vec2);
    print_raw_array(vec2.data(), vec2.size());

    std::cout << vec2[0] << " " << vec2[1] << " " << vec2[2] << std::endl;
    std::cout << vec2.at(0) << " " << vec2.at(1) << " " << vec2.at(2) << std::endl;

    std::cout << vec2.front() << std::endl;
    print_vec(vec2);

    std::cout << vec2.back() << std::endl;
    print_vec(vec2);

    vec2.pop_back();
    print_vec(vec2);

    vec2.push_back("heart");
    print_vec(vec2);

    return 0;
}