#include "civilengineer.h"

CivilEngineer::CivilEngineer() {
    std::cout << "Constructor CivilEngineer" << std::endl;
}

CivilEngineer::CivilEngineer(std::string_view company, std::string_view firstName, std::string_view lastName, std::string_view name)
    : Engineer{company, firstName, lastName}, mCivilName(name) {
        std::cout << "custom constructor CivilEngineer" << std::endl;
}