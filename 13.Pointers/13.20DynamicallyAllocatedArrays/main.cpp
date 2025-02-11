#include <iostream>

int main() {
    const size_t ARRAY_SIZE{10};

    int * p_arr{ new(std::nothrow) int[ARRAY_SIZE]{1,2,3,4,5} };

    // for (const auto a : p_arr)
    // for (size_t i{}; i < std::size(p_arr); i++)
    for (size_t i{}; i < ARRAY_SIZE; i++) {
        std::cout << i << " element is " << p_arr[i] << ", " << *(p_arr + i) << std::endl;
    }

    delete[] p_arr;

    return 0;
}
