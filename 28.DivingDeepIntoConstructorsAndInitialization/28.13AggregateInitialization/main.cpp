#include <iostream>

struct Point {
    double x{};
    double y{};
};

void printPoint(const Point& point) {
    std::cout << "x : " << point.x << ", y : " << point.y << std::endl;
}

int main(int argc, char** argv) {
    Point p{1,2};
    printPoint(p);

    int array[]{1,2,3,4,5};
    
    return 0;
}