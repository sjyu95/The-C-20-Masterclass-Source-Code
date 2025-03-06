#include <iostream>
#include "person.h"

Person::Person(const std::string& firstName, const std::string& lastName, int age)
: m_firstName(firstName)
, m_lastName(lastName)
, m_age(new int(age)) {
    std::cout << "call deligated constructor" << std::endl;
}

Person::~Person() {
    std::cout << "call destructor" << std::endl;
    delete m_age;
}

Person::Person(const Person& person)
: Person(person.getFirstName(), person.getLastName(), *(person.getAge())) {
    std::cout << "call copy constructor" << std::endl;
}

const std::string& Person::getFirstName() const {
    return m_firstName;
}

const std::string& Person::getLastName() const {
    return m_lastName;
}

int* Person::getAge() const {
    return m_age;
}

void Person::setFirstName(const std::string& firstName) {
    m_firstName = firstName;
}

void Person::setLastName(const std::string& lastName) {
    m_lastName = lastName;
}

void Person::setAge(int age) {
    *m_age = age;
}

void Person::printInfo() const {
    std::cout << "this : " << this
              << ", firstname : " << m_firstName
              << ", lastname : " << m_lastName
              << ", age : " << *m_age 
              << ", age address : " << m_age << std::endl;
}