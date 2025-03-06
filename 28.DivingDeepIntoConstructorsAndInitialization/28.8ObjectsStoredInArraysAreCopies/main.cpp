#include <iostream>
#include "person.h"

int main(int argc, char** argv) {
    Person * p1 = new Person{"Demi", "More", 62};
    Person * p2 = new Person{"Selma", "Heiack", 54};
    Person * p3 = new Person{"John", "Smith", 30};
    p1->printInfo();
    p2->printInfo();
    p3->printInfo();

    std::cout << "-----" << std::endl;
    Person ps[]{*p1, *p2, Person{"Sejung", "Yoo", 33}};
    for (auto p : ps) { // call copy constructor
    // for (auto& p : ps) {
        p.printInfo();
    }

    std::cout << "-----" << std::endl;
    Person* ps2[]{p1, p2, p3};
    for (auto p : ps2) {
        p->printInfo();
    }

    std::cout << "-----" << std::endl;
    Person* ps3[]{p1, p2, new Person{"Sejung", "Yoo", 33}};
    for (auto p : ps3) {
        p->printInfo();
    }

    return 0;
}