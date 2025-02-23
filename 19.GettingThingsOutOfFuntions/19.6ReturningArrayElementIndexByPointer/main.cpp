#include <iostream>

// function declairation - prototype
const double* find_max(const double array[], int size);

int main(int argc, char** argv) {
    double array[]{-3.0,-2.0,-1.0};

    const double* p_max{find_max(array, std::size(array))};
    std::cout << "max is " << *p_max << std::endl;

    return 0;
}

// function definition 
const double* find_max(const double array[], int size) {
    double max{array[0]};
    unsigned max_index{};
    for (size_t i{}; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
            max_index = i;
        }
    }

    return &array[max_index];
}