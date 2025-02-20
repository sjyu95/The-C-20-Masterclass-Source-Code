#include <iostream>

// declairation - function prototype
void print_sum(int* num1, int* num2);

int main() {
    // int num1{1};
    // int* p_num1{&num1};
    // int* p_num2{ new int{2} };
    // print_sum(p_num1, p_num2);

    // double num1{1}, num2{2};
    int num1{1}, num2{2};
    print_sum(&num1, &num2);

    return 0;
}

// definition
void print_sum(int* num1, int* num2) {
    std::cout << "sum is " << (*num1 + *num2) << std::endl;
}