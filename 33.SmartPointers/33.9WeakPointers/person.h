#ifndef PERSON_H
#define PERSON_H

#include <memory>
#include <string>

class Person {
public:
    Person(std::string_view name);
    ~Person();

    void setFriend(std::shared_ptr<Person> person);

private:
    std::weak_ptr<Person> m_friend{};
    std::string m_name;
};

#endif