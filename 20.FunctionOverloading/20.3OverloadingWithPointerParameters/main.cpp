#include <iostream>

int max(int array[], size_t size);
double max(double array[], size_t size);
// int max(int* ptr, size_t size);

int main(int argc, char** argv) {
    int int_array[]{1,2,3,4,5};
    double double_array[]{1.0,2.0};

    max(int_array, std::size(int_array));
    max(double_array, std::size(double_array));

    return 0;
}

int max(int array[], size_t size) {
    int max{};
    for (size_t i{}; i < size; i++) {
        if (max < array[i]) {
            max = array[i];
        }
    }
    std::cout << "max of int_array" << std::endl;
    return max;
}
double max(double array[], size_t size) {
    double max{};
    for (size_t i{}; i < size; i++) {
        if (max < array[i]) {
            max = array[i];
        }
    }
    std::cout << "max of double_array" << std::endl;
    return max;
}

// int max(int* array, size_t size) {
//     int max{};
//     for (size_t i{}; i < size; i++) {
//         if (max < array[i]) {
//             max = array[i];
//         }
//     }
//     std::cout << "max of int_ptr_array" << std::endl;
//     return max;
// }