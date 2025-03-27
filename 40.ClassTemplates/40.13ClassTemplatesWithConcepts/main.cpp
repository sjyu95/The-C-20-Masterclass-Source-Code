#include <iostream>
#include "boxcontainer.h"

class Point{
public:
	// Point() = delete;
};

int main() {
    BoxContainer<int> container{};
    container.add(10);
    container.add(20);
    container.add(30);

    std::cout << container;

	BoxContainer<Point> container2{};

    return 0;
}