#include <concepts>
#include <iostream>

template <typename T>
concept Number = (std::integral<T> || std::floating_point<T>) && !std::same_as<T, bool> && !std::same_as<T, char>;

template <Number T, Number U>
auto add(T a, U b) {
    return a + b;
}

int main() {
    std::cout << "add : " << add(1,2) << std::endl;
    // std::cout << "add : " << add(1,true) << std::endl;
}