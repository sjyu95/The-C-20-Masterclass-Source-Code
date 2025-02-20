#include <iostream>

// function declairation and definition
// constexpr int multiply(int num) {
//     return 3 * num;
// }

inline constexpr int multiply(int num) {
    return 3 * num;
}

int main() {
    int result = multiply(3);
    // int result = multiply(3); // runtime

    std::cout << "result is " << result << std::endl;

    return 0;
}
