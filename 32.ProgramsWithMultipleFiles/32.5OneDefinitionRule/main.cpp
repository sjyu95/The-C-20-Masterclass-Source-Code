#include <iostream>
#include "person.h"

double variable{};
// double variable;

double add (double a, double b);
double add (double a, double b);

namespace {
    struct Point {
        double x;
        double y;
    };
}

// Person::Person(std::string_view name, int age) : m_name(name), m_age(age) {}

// void Person::printInfo() {
//     std::cout << "name : " << m_name << ", age : " << m_age << std::endl;
// }

int main(int argc, char** argv) {
    Person p1{"John", 27};
    p1.printInfo();

    return 0;
}

double add (double a, double b) {
    return a+b;
}

// double add (double a, double b) {
//     return a+b;
// }