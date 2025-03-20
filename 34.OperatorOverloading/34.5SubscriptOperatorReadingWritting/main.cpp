#include "point.h"

int main() {
    Point p1{1,2};

    p1[0] = 10;
    p1[1] = 20;

    p1.print_info();

    return 0;
}