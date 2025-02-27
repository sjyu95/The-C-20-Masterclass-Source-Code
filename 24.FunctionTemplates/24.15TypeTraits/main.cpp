#include <iostream>
#include <type_traits>

template <typename T>
void print_num(T a) {
    // static_assert(std::is_integral_v<T>);
    static_assert(std::is_integral_v<T>, "T is not integral type");
    std::cout << a << std::endl;
}

int main(int argc, char** argv) {

    std::cout << std::boolalpha;
    std::cout << "std::is_integral<int>::value is " << std::is_integral<int>::value << std::endl;
    std::cout << "std::is_integral<double>::value is " << std::is_integral<double>::value << std::endl;

    std::cout << "std::is_integral_v<int> is " << std::is_integral_v<int><< std::endl;
    std::cout << "std::is_integral_v<double> is " << std::is_integral_v<double> << std::endl;

    print_num('a');
    // print_num(1.1);

    auto func = []<typename T>(T a, T b) {
        static_assert(std::is_integral_v<T>, "func need to integral type");
        return a + b;
    };
    // func(1.1,2.2);
    func(1,2);

    return 0;
}