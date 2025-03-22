#ifndef ENGINEER_H
#define ENGINEER_H

#include <iostream>
#include <string>
#include "person.h"
// class Person;

class Engineer : private Person {
    friend std::ostream& operator<< (std::ostream& os, const Engineer& Engineer);
public:
    Engineer() = default;
    Engineer(std::string_view company, std::string_view firstName, std::string_view lastName);

    void Print() const;
private:
    std::string m_company;
};

#endif