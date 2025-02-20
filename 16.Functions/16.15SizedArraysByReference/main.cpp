#include <iostream>
// #include <array>

double sum(double (&array)[5]); 

int main() {
    double values[]{2.3, 3.4, 4.5, 5.6, 6.7};
    std::cout << "sum is " << sum(values) << std::endl;

    return 0;
}

double sum(double (&array)[5]) {
    double result{};

    std::cout << "sizeof(array) is " << sizeof(array) << std::endl;
    std::cout << "sizeof(int) is " << sizeof(int) << std::endl;
    std::cout << "sizeof(double) is " << sizeof(double) << std::endl;

    // for (size_t i{}; i < std::size(array); i++) {
    //     result += array[i];
    // }
    for (double i : array) {
        result += i;
    }

    return result;
}