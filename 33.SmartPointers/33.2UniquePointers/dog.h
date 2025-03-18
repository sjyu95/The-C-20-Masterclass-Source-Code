#ifndef DOG_H
#define DOG_H

#include <string>

class Dog {
public:
    Dog() = default;
    Dog(std::string name);
    ~Dog();

    void printName();

private:
    std::string mName{"Poppy"};
};

#endif