#include <iostream>
#include "person.h"

Person::Person(std::string_view name, int age) : mName(name), mAge(age) {
    std::cout << "Person constructor name : " << mName << ", age : " << mAge << std::endl;
}

Person::~Person() {
    std::cout << "Person destructor name : " << mName << std::endl;
}

void Person::adaptDog(const Dog& dog) {
    dog.printName();
}