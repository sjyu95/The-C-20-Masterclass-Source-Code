#include <iostream>

// declairation - function prototype
double sum_2d(double array[][3], size_t size);
double sum_3d(double array[][3][2], size_t size);

int main() {
    double array2d[][3] = {
        {1.0, 2.0, 3.0},
        {1.0, 2.0, 3.0},
        {1.0, 2.0, 3.0}
    };
    double array3d[][3][2] = {
        {
            {1.0, 2.0},
            {3.0, 4.0},
            {5.0, 6.0}
        },
        {
            {1.0, 2.0},
            {3.0, 4.0},
            {5.0, 6.0}
        },
    };

    std::cout << "sum of 2darray is " << sum_2d(array2d, std::size(array2d)) << std::endl;
    std::cout << "sum of 3darray is " << sum_3d(array3d, std::size(array3d)) << std::endl;

    return 0;
}

// definition
double sum_2d(double array[][3], size_t size) {
    double sum{};
    for (size_t i{}; i < size; i++) {
        for (size_t j{}; j < 3; j++) {
            // sum += array[i][j];
            sum += *(*(array + i) + j);
        }
    }
    return sum;
}

double sum_3d(double array[][3][2], size_t size) {
    double sum{};
    for (size_t i{}; i < size; i++) {
        for (size_t j{}; j < 3; j++) {
            for (size_t k{}; k < 2; k++) {
                // sum += array[i][j][k];
                sum += *(*(*(array + i) + j) + k);
            }
        }
    }
    return sum;
}