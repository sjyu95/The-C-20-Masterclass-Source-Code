#include <iostream>

int sum_up(int value);

int main(int argc, char** argv) {
    std::cout << "smu is " << sum_up(10);
    return 0;
}

int sum_up(int value) {
    if (value > 0) {
        value = value + sum_up(value-1);
        return value;
    }
    return 0;
}