#include <iostream>
#include <string_view>

class Dog {
public:
    Dog() = default;
    Dog(std::string_view name, std::string_view breed, int age) {
        m_name = name;
        m_breed = breed;
        m_age = new int{age};
        std::cout << "call constructor : name - " << m_name << ", breed - " << m_breed << ", age - " << *m_age << std::endl;
    }
    ~Dog() {
        delete m_age;
        std::cout << "call destructor" << std::endl;;
    }

private:
    std::string m_name;
    std::string m_breed;
    int * m_age;
};

void some_function(Dog * dog) {
}

int main(int argc, char** argv) {
    // Dog dog; // call default constructor. m_age is null.
    // Dog dog("happy", "Buldog", 4); // Dog created and than copyed (copy constructor), and 2 called destructor. crash
    // some_function(dog);
    Dog *p_dog = new Dog("happy", "Buldog", 4);
    some_function(p_dog);
    delete p_dog;
    return 0;
}