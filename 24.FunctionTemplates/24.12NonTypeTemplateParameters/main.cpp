#include <iostream>

template <typename T, double N>
bool is_valid(T[] array, size_t size) {
    T sum{};
    for (size_t i{}; i < size; i++) {
        sum += array[i];
        if (sum > N) {
            return false;
        }
    }
    return true;
}

int main(int argc, char** argv) {
    double arr[] = {1.0, 2.0, 3.0, 4.0, 5.0};

    std::cout << std::boolalpha;
    std::cout << "is_valid : " << is_valid<double, 10>(arr, std::size(arr)) << std::endl;

    return 0;
}