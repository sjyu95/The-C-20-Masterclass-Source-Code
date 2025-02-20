#include <iostream>
// #include <array>

double sum(double array[5], unsigned int size); 

int main() {
    double values[]{2.3, 3.4};
    std::cout << "sum is " << sum(values, std::size(values)) << std::endl;

    return 0;
}

double sum(double array[5], unsigned int size) {
    double result{};

    std::cout << "sizeof(array) is " << sizeof(array) << std::endl;
    std::cout << "sizeof(int) is " << sizeof(int) << std::endl;
    std::cout << "sizeof(double) is " << sizeof(double) << std::endl;

    // size = std::size(array); // pointer decay

    for (size_t i{}; i < size; i++) {
        result += array[i];
    }

    return result;
}