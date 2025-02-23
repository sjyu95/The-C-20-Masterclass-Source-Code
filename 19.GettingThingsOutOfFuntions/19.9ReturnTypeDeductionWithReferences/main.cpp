#include <iostream>

auto& max_ref(int& a, int& b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main(int argc, char** argv) {
    int a{1}, b{2};

    int& result = max_ref(a,b);

    result++;

    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << a << std::endl;
    std::cout << "result is " << result << std::endl;

    return 0;
}