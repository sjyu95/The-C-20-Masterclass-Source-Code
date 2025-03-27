#include <iostream>
#include "boxcontainer.h"

int main() {
    BoxContainer<int> container{};
    container.add(10);
    container.add(20);
    container.add(30);

    std::cout << container;
    return 0;
}