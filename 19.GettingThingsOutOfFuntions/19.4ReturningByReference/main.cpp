#include <iostream>

int& sum(int& a, int& b) {
    int result = a + b;
    return result; // wrong
}

int sum2(int a, int b) {
    int result = a + b;
    std::cout << "result address is " << &result << std::endl;
    return result;
}

int& max(int& a, int& b) {
    if (a > b) {
        return a;
    } else {
        return  b;
    }
}

int main(int argc, char** argv) {
    int a{1}, b{2};
    std::cout << "max is " << max(a, b) << std::endl;

    int result{sum2(a,b)};
    std::cout << "sum address is " << &result << std::endl;

    return 0;
}