#include <iostream>
#include <string>

class Dog {
public:
    Dog(const std::string& name, int age) : m_name(name), m_age(age) {}

private:
    std::string m_name;
    int m_age{};

    friend void debugDogInfo(const Dog& dog);
};

void debugDogInfo(const Dog& dog) {
    std::cout << "name : " << dog.m_name << ", age : " << dog.m_age << std::endl;
}

int main(int argc, char** argv) {
    Dog dog{"Cookie", 1};
    debugDogInfo(dog);

    return 0;
}