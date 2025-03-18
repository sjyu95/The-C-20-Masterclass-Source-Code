#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include "dog.h"

class Person {
public:
    Person(std::string_view name, int age);
    ~Person();

    void adaptDog(const Dog& dog);
private:
    int mAge{};
    std::string mName;
};

#endif