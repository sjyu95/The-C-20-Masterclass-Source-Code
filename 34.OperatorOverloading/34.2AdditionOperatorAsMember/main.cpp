#include "point.h"

int main(int argc, char** argv) {
    Point a{1,1}, b{10,10};
    a.print_info();
    b.print_info();

    auto c = a+b;
    c.print_info();

    Point d{a+b};
    d.print_info();

    return 0;
}