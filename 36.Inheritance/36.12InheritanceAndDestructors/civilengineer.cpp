#include "civilengineer.h"

CivilEngineer::CivilEngineer() {
    std::cout << "default constructor CivilEngineer" << std::endl;
}

CivilEngineer::CivilEngineer(std::string_view company, std::string_view firstName, std::string_view lastName, std::string_view name)
    : Engineer{company, firstName, lastName}, mCivilName(name) {
        std::cout << "custom constructor CivilEngineer" << std::endl;
}

CivilEngineer::CivilEngineer(const CivilEngineer& eng) : Engineer(eng), mCivilName(eng.mCivilName) {
    std::cout << "copy constructor CivilEngineer" << std::endl;
}

CivilEngineer::~CivilEngineer() {
    std::cout << "destructor CivilEngineer" << std::endl;
}