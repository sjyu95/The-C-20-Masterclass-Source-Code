#ifndef CIVIL_ENGINEER_H
#define CIVIL_ENGINEER_H

#include "engineer.h"
#include "person.h"

class CivilEngineer : public Engineer {
public:
    CivilEngineer();
    CivilEngineer(std::string_view company, std::string_view firstName, std::string_view lastName, std::string_view name);
    CivilEngineer(const CivilEngineer& eng);
    // using Person::getLastName;

private:
    std::string mCivilName;
};

#endif