#include <iostream>
#include <string_view>

class Dog {
public:
    Dog() = default;
    Dog(std::string_view name, std::string_view breed, int age);
    ~Dog();

    // Dog* set_name(std::string_view name);
    // Dog* set_breed(std::string_view breed);
    // Dog* set_age(int age);

    Dog& set_name(std::string_view name);
    Dog& set_breed(std::string_view breed);
    Dog& set_age(int age);

    void print_info();

private:
    std::string name;
    std::string breed;
    int * age;
};

Dog::Dog(std::string_view name, std::string_view breed, int age) {
    this->name = name;
    this->breed = breed;
    this->age = new int{age};
    std::cout << "call constructor : name - " << this->name << ", breed - " << this->breed << ", age - " << *(this->age) << std::endl;
}
Dog::~Dog() {
    delete age;
    std::cout << "call destructor : name - " << name << std::endl;;
}

Dog& Dog::set_name(std::string_view name) {
// Dog* Dog::set_name(std::string_view name) {
    this->name = name;
    return *this;
    // return this;
}

Dog& Dog::set_breed(std::string_view breed) {
// Dog* Dog::set_breed(std::string_view breed) {
    this->breed = breed;
    return *this;
    // return this;
}

Dog& Dog::set_age(int age) {
// Dog* Dog::set_age(int age) {
    *(this->age) = age;
    return *this;
    // return this;
}

void Dog::print_info() {
    std::cout << "information : name - " << this->name << ", breed - " << this->breed << ", age - " << *(this->age) << std::endl;
}

int main(int argc, char** argv) {
    Dog dog1 = Dog("happy1", "Buldog", 1);
    dog1.set_name("happy2").set_breed("Shepherd").set_age(2).print_info();
    // dog1.set_name("happy2")->set_breed("Shepherd")->set_age(2)->print_info();
    return 0;
}