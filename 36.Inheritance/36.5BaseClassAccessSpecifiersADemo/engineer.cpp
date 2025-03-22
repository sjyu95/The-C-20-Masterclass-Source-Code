#include "engineer.h"

Engineer::Engineer(std::string_view company, std::string_view firstName, std::string_view lastName)
: Person(firstName, lastName)
, m_company(company) {
}

void Engineer::Print() const {
    std::cout << m_company << m_firstName << m_lastName;
}

std::ostream& operator<< (std::ostream& os, const Engineer& engineer) {
    os << "Engineer name : " << engineer.m_firstName << " " << engineer.m_lastName;
    os << ", company : " << engineer.m_company << std::endl;
    return os;
}
