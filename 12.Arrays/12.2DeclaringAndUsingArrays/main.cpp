#include <iostream>

int main() {
    constexpr size_t ARRAY_SIZE{10};
    // int scores[10];
    // int scores[] { 1,2,3,4,5,6,7,8,9,0 };
    // int scores[ARRAY_SIZE] { 1,2,3 };
    int scores[]{1,2,3};
    
    // for (size_t i{}; i < ARRAY_SIZE; ++i) {
    //     std::cout << "scores[" << i << "] is " << scores[i] << std::endl;
    // }

    scores[0] = 10;
    scores[1] = 20;
    scores[2] = 30;

    for (const auto i : scores) {
        std::cout << "scores is " << i << std::endl;
    }

    int sum{0};

    for (const auto i : scores) {
        sum += i; // CAUSION. no scores[i]
    }
    std::cout << "sum is " << sum << std::endl;

    return 0;
}