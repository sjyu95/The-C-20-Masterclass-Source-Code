#include <iostream>
#include <type_traits>

template <typename T>
void test_constexpr(T a){
    if constexpr(std::is_integral_v<T>) {
        std::cout << "T is integral" << std::endl;
    } else if constexpr(std::is_floating_point_v<T>) {
        std::cout << "T is floating point" << std::endl;
    } else {
        static_assert(false, "invalid T type");
    }
}

int main(int argc, char** argv) {
    // test_constexpr(1);
    // test_constexpr(1.1f);
    // test_constexpr(1.1);
    test_constexpr('a');
    // test_constexpr("a"); // wrong
    return 0;
}