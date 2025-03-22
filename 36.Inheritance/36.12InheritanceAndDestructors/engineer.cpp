#include "engineer.h"

Engineer::Engineer() {
    std::cout << "default constructor Engineer" << std::endl;
}

Engineer::Engineer(std::string_view company, std::string_view firstName, std::string_view lastName)
: Person(firstName, lastName)
, m_company(company) {
    std::cout << "custom constructor Engineer" << std::endl;
}

Engineer::Engineer(const Engineer& engineer) : Person(engineer), m_company(engineer.m_company) {
    std::cout << "copy constructor Engineer" << std::endl;
}

Engineer::~Engineer() {
    std::cout << "destructor Engineer" << std::endl;
}

void Engineer::Print() const {
    std::cout << m_company << " " << m_firstName << " " << getLastName();
}

std::ostream& operator<< (std::ostream& os, const Engineer& engineer) {
    os << "Engineer name : " << engineer.m_firstName << " " << engineer.getLastName();
    os << ", company : " << engineer.m_company << std::endl;
    return os;
}
