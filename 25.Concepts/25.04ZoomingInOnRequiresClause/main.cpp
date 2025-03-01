#include <iostream>
#include <concepts>

template <typename T>
concept TinyType = requires {
    // sizeof(T) < 4;
    requires sizeof(T) <= 4; // nested requirement clause
};

template <typename T>
requires TinyType<T>
T add(T a, T b) {
    return a + b;
};

// template <TinyType T>
// T add(T a, T b) {
//     return a + b;
// };

// template <typename T>
// T add(T a, T b) requires TinyType<T> {
//     return a + b;
// };

// template <typename T>
// TinyType auto add(TinyType auto a, TinyType auto b) -> decltype(a + b) { // wrong why?
//     return a + b;
// };

template <typename T>
concept Addable = requires (T a, T b) {
    // {a + b} -> std::convertible_to<T, int>; // wrong. std::convertible_to is concept. no type_traits
    {a + b} -> std::convertible_to<int>;
};

template <Addable T>
T add2(T a, T b) {
    return a + b;
}

int main(int argc, char** argv) {
    // char a{'a'}, b{'b'};
    int a{1}, b{2};
    // auto result = add(a,b);
    // std::string a{"hello "}, b{"world"};
    auto result = add2(a,b);

    std::cout << "result is " << result << ", sizeof(result) is " << sizeof(result) << std::endl;

    return 0;
}