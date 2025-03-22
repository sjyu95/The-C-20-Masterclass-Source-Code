#ifndef CIVIL_ENGINEER_H
#define CIVIL_ENGINEER_H

#include "engineer.h"

class CivilEngineer : public Engineer {
public:
    CivilEngineer() = default;
    CivilEngineer(std::string_view name) : Engineer{"nc", "Sejung", "Yoo"}, mCivilName(name) {}

private:
    std::string mCivilName;
};

#endif