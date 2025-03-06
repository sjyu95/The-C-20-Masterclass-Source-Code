#include "person.h"

int main(int argc, char** argv) {
    Person * person1 = new Person{"Demi", "More", 62};
    person1->printInfo();
    person1->setAge(52);
    person1->printInfo();

    Person * person2{person1}; // copy pointer
    person2->setAge(24);
    person2->printInfo();
    person1->printInfo();

    Person * person3 = new Person{*person1}; // call copy constructor
    person3->setAge(14);
    person3->printInfo();
    person1->printInfo();

    Person person4{*person1}; // call copy constructor
    person4.setAge(60);
    person4.printInfo();
    person1->printInfo();

    return 0;
}