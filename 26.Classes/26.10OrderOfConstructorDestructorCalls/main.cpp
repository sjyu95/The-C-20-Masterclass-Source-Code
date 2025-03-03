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
        std::cout << "call destructor : name - " << m_name << std::endl;;
    }

private:
    std::string m_name;
    std::string m_breed;
    int * m_age;
};

int main(int argc, char** argv) {
    Dog dog1 = Dog("happy1", "Buldog", 1);
    Dog dog2 = Dog("happy2", "Buldog", 1);
    Dog dog3 = Dog("happy3", "Buldog", 1);
    Dog dog4 = Dog("happy4", "Buldog", 1);
    return 0;
}