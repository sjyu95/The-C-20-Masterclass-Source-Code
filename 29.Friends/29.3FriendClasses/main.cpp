#include <iostream>
#include <string>

class Dog {
public:
    Dog(const std::string& name, int age) : m_name(name), m_age(age) {}

private:
    std::string m_name;
    int m_age{};

    friend class Cat;
};

class Cat {
public:
    void debugDogInfo(const Dog& dog) {
        std::cout << "dog's name : " << dog.m_name << ", age : " << dog.m_age << std::endl;
    }
};

int main(int argc, char** argv) {
    Dog dog{"Cookie", 1};
    Cat cat;
    cat.debugDogInfo(dog);

    return 0;
}