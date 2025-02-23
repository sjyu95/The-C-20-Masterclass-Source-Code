#include <iostream>

// auto process_value(int a, double b) {
auto process_value(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main(int argc, char** argv) {

    auto val = process_value(2,3);
    std::cout << "val is " << val << std::endl;
    std::cout << "sizeof(val) : " << sizeof(val) << std::endl;
    return 0;
}