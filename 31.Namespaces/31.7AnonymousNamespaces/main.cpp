#include <iostream>

namespace {
    int add(int a, int b);
}

int main(int argc, char** argv) {
    std::cout << "add(1,3) : " << add(1,3) << std::endl;
    return 0;
}

namespace {
    int add(int a, int b) {
        return a, b;
    }
}