#ifndef DOG_H
#define DOG_H

#include <string>

class Dog {
public:
    Dog() = default;
    Dog(std::string name);
    ~Dog();

    std::string getName() const;
    void setName(std::string_view name);
    void printName() const;

private:
    std::string mName{"Poppy"};
};

#endif