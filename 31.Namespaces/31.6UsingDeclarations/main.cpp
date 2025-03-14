#include <iostream>
#include "cylinder.h"
#include "line.h"
#include "point.h"
#include "operations.h"

using namespace Geom;

double add(double a, double b) {
    return a+b;
}

int main(int argc, char** argv) {
    Point p1{1,2}, p2{3,4};
    Line l1{p1, p2};

    l1.print_info();

    using std::cout, std::endl;
    cout << Math::add(1,2) << endl;
    cout << Math_Weighted::add(1,2) << endl;

    using namespace Math;
    cout << ::add(1,2) << endl;
    // cout << add(1,2) << endl;
    cout << Math::add(1,2) << endl;

    return 0;
}
