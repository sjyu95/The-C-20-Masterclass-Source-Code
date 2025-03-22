#include <iostream>
#include "person.h"

Person::Person() {
    std::cout << "Constructor Person" << std::endl;
}

Person::Person(std::string_view firstName, std::string_view lastName) : m_firstName(firstName), m_lastName(lastName) {}

std::string Person::getFirstName() const {
    return m_firstName;
}

std::string Person::getLastName() const {
    return m_lastName;
}

void Person::setFirstName(std::string_view firstName) {
    m_firstName = firstName;
}

void Person::setLastName(std::string_view lastName) {
    m_lastName = lastName;
}

std::ostream& operator<< (std::ostream& os, const Person& person) {
    os << "Person : " << person.m_firstName << " " << person.m_lastName << std::endl;
    return os;
}
