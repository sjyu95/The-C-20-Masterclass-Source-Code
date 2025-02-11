#include <iostream>

int main() {
    int int_val{10};
    double fractional_val{20};

    // int * p_int_val{};
    // int * p_int_val{nullptr};
    int * p_int_val{&int_val};
    // double * p_fractional_val{};
    // double * p_fractional_val{nullptr};
    double * p_fractional_val{&fractional_val};
    
    std::cout << "int val is " << int_val << ", size of " << sizeof(int_val) << std::endl;
    std::cout << "double val is " << fractional_val << ", size of " << sizeof(fractional_val) << std::endl;
    std::cout << "int pointer val is " << p_int_val << ", size of " << sizeof(p_int_val) << std::endl;
    std::cout << "double pointer val is " << p_fractional_val << ", size of" << sizeof(p_fractional_val) << std::endl;
    std::cout << "int pointer type's size of " << sizeof(int *) << std::endl;
    std::cout << "double pointer type's size of " << sizeof(double *) << std::endl;
    std::cout << "int pointer's raw value is " << *p_int_val << std::endl;
    std::cout << "double pointer's raw value is " << *p_fractional_val << std::endl;

    return 0;
}