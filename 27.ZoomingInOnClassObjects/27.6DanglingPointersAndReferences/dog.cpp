#include <iostream>
#include "dog.h"

Dog::Dog(std::string_view name, std::string_view breed, unsigned age)
: m_name(name)
, m_breed(breed)
, m_age(age) {
}

// std::string& Dog::name() const {
const std::string& Dog::name() const {
    return m_name;
}

std::string& Dog::name() {
    return m_name;
}

const unsigned& Dog::age() const {
    return m_age;
}

unsigned& Dog::age() {
    return m_age;
}

void Dog::print_info() const {
    std::cout << "address : " << this << ", name : " << m_name.c_str() << ", age : " << m_age << std::endl;
}

void Dog::print_info() {
    std::cout << "address : " << this << ", name : " << m_name.c_str() << ", age : " << m_age << std::endl;
}

const std::string& Dog::compiled_info() const {
    std::string info = m_name + ", " + m_breed + ", " + std::to_string(m_age) + " years old";
    return info;
}

const unsigned& Dog::jump_age() const {
    unsigned jumped{m_age + 10};
    return jumped;
}
