#include <string>
#include <type_traits>
#include <concepts>

template <typename T>
concept MyIntegral = std::is_integral_v<T>;

template <typename T>
requires MyIntegral<T>
T add (T a, T b) {
    return a + b;
}

template <typename T>
concept MyMultiple = requires(T a, T b) {
    a * b;
};

template <MyMultiple T>
T mul (T a, T b) {
    return a * b;
}

auto mul2 (MyIntegral auto a, MyIntegral auto b) {
    return a * b;
}

int main(int argc, char** argv) {
    int a{1}, b{2};
    // double a{1.0}, b{2.0};
    // std::string a{"aa"},  b{"bb"};

    // add(a, b);
    mul2(a, b);

    return 0;
}