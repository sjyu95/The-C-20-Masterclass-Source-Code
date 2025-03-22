#ifndef NURSE_H
#define NURSH_H

#include <iostream>
#include <string>
#include "person.h"
// class Person;

class Nurse : protected Person {
    friend std::ostream& operator<< (std::ostream& os, const Nurse& nurse);
public:
    Nurse() = default;
    Nurse(std::string_view hospitalName, int cureerAge, std::string_view firstName, std::string_view lastName);

private:
    std::string mHospitalName;
    int mCureerAge{};
};

#endif