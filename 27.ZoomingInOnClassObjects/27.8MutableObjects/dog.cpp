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
    std::cout << "address : " << this << ", name : " << m_name << ", age : " << m_age << ", call_count : " << m_call_count++ << std::endl;
}

void Dog::print_info() {
    std::cout << "address : " << this << ", name : " << m_name << ", age : " << m_age << std::endl;
}