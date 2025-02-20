#include <iostream>
#include "exercise.h"

int main() {
    int array[] {1,-5,2,-1,3};
    int result = max_subsequence_sum(array,std::size(array));
    std::cout << "result is " << result << std::endl;

    return 0;
}