#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
    friend std::ostream& operator<< (std::ostream& os, const Person& person);
public:
    Person();
    Person(std::string_view firstName, std::string_view lastName);
    Person(const Person& person);
    ~Person();

    std::string getFirstName() const;
    std::string getLastName() const;

    void setFirstName(std::string_view firstName);
    void setLastName(std::string_view lastName);
public:
    std::string m_firstName{};
private:
    std::string m_lastName{};
};

#endif