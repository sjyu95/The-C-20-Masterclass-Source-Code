#include <concepts>
#include <cstring>
#include <iostream>
#include <string>
#include <type_traits>

template <typename T>
// concept ConvertibleToStdString = std::convertible_to<T, std::string>; // why wrong?
concept ConvertibleToStdString = requires (T a) {
    std::to_string(a);
};

template <ConvertibleToStdString T>
std::string concatenate (T a, T b) {
    return std::to_string(a) + std::to_string(b);
}

// std::string concatenate (ConvertibleToStdString auto a, ConvertibleToStdString auto b) {
//     return std::to_string(a) + std::to_string(b);
// }

int main() {
    auto result = concatenate(22.22,33.33);
    std::cout << "result : " << result << std::endl;

    auto result1 = concatenate(22,33);
    std::cout << "result1 : " << result1 << std::endl;
}

