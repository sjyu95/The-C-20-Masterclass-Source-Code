#include <ostream>
#include <string>
#include "nurse.h"
#include "person.h"

Nurse::Nurse(std::string_view hospitalName, int cureerAge, std::string_view firstName, std::string_view lastName)
: mHospitalName(hospitalName)
, mCureerAge(cureerAge)
, Person(firstName, lastName)
{}

std::ostream& operator<< (std::ostream& os, const Nurse& nurse) {
    os << "Nurse name : " << nurse.m_firstName << " " << nurse.m_lastName;
    os << ", hospital : " << nurse.mHospitalName << ", age : " << nurse.mCureerAge << std::endl;
    return os;
}