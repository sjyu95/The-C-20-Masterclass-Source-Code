#include <iostream>

int max(int a, int b);
// int max(const int a, const int b);

int main(int argc, char** argv) {
    std::cout << max(1,3) << std::endl;
}

// int max(int a, int b) {
//     b++;
//     return (a>b) ? a : b;
// }

int max(const int a, const int b) {
    // a++;
    return (a>b) ? a : b;
}
