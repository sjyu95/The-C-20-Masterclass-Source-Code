#include <iostream>
#include "person.h"

Person::Person(std::string_view name) : m_name(name) {
    std::cout << "Person " << m_name << " constructor called" << std::endl;
}

Person::~Person() {
    std::cout << "Person " << m_name << " destructor called" << std::endl;
}

void Person::setFriend(std::shared_ptr<Person> person) {
    m_friend = person;
}