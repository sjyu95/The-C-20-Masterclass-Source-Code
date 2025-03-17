#include "person.h"

double variable{};

double add (double a, double b);

namespace {
    struct Point {
        double x;
        double y;
    };
}

int main(int argc, char** argv) {
    Person p1{"John", 27};
    p1.printInfo();

    return 0;
}

double add (double a, double b) {
    return a+b;
}