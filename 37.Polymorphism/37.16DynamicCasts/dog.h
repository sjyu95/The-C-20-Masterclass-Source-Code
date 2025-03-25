#ifndef DOG_H
#define DOG_H
#include "feline.h"
class Dog : public Feline
{
public:
    Dog() = default;
    Dog(std::string_view fur_style, std::string_view description);
    ~Dog();

    virtual void bark() const{
        std::cout << "Dog::bark called : Woof!" << std::endl;
    }

    void do_something_dog() const {
        std::cout << " Dog : do_something_dog" << std::endl;
    }
};

#endif // DOG_H
