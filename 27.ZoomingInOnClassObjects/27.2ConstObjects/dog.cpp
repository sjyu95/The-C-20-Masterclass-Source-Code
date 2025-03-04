#include <iostream>
#include "dog.h"

Dog::Dog(std::string_view name, std::string_view breed, unsigned age)
: m_name(name)
, m_breed(breed)
, m_age(age) {
}

std::string Dog::getName() {
    return m_name;
}

unsigned Dog::getAge(){
    return m_age;
}

Dog & Dog::setName(std::string_view name) {
    m_name = name;
    return *this;
}

Dog & Dog::setAge(unsigned age) {
    m_age = age;
    return *this;
}

void Dog::print_info() {
    std::cout << "name : " << m_name.c_str() << ", age : " << m_age << std::endl;
}