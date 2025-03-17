#include <iostream>
#include "person.h"

int Person::sCallCount{0};

Person::Person(std::string_view name, int age) : m_name(name), m_age(age) {}

void Person::printInfo() {
    std::cout << "name : " << m_name << ", age : " << m_age << std::endl;
}