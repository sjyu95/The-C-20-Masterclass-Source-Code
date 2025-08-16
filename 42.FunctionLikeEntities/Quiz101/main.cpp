#include <iostream>
#include "add_1.h"
#include "multiple_by_2.h"

template <typename T>
double* modify(double* src, T modifier, int size) {
    for (int i{}; i < size; ++i) {
        src[i] = modifier(src[i]);
    }
    return src;
}

int main() {
    Multiple_by_2 Multiple_by_2;
    Add_1 add_1;

    double scores[3]{1,2,3};

    modify(scores, Multiple_by_2, 3);
    modify(scores, add_1, 3);

    std::cout << "data [";
    for(unsigned int i{}; i < std::size(scores); ++ i){
        std::cout << scores[i] << " ";
    }
    std::cout << "]" << std::endl;

    return 0;
}