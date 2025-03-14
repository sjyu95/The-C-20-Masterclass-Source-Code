#include <iostream>

const int ADJUSTMENT{10};

int Add(int a, int b) {
    return a+b;
}

namespace adjustment {
    int Add(int a, int b) {
        return a+b+ADJUSTMENT;
    }
    void PrintNoAdjustment(int a, int b) {
        std::cout << "Add no adjustment : " << ::Add(a,b) << std::endl;
    }
}

int main(int argc, char** argv) {
    std::cout << "adjusted Add : " << adjustment::Add(1,2) << std::endl;
    adjustment::PrintNoAdjustment(1,2);

    return 0;
}