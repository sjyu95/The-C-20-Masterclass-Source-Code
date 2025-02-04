#include <iostream>

int main() {
    int a{10};
    int b{20};
    int c{30};
    int result = (a+=10, b - 10, ++c);

    std::cout << "a: " << a << ", b: " << b << ", c: " << c << ", result : " << result << std::endl;

    return 0;
}