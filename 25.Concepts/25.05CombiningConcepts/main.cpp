#include <concepts>

template <typename T>
concept TinyType = requires (T n) {
    requires sizeof(T) < 4;
};

// template <typename T>
// requires TinyType<T> || std::integral<T>
// T add(T a, T b) {
//     return a + b;
// };

template <typename T>
T add(T a, T b) requires TinyType<T> || std::integral<T> {
    return a + b;
};

int main(int argc, char** argv) {
    char a{'a'}, b{'b'};
    // double a{1.1}, b{2.2};

    add(a, b);

    return 0;
}