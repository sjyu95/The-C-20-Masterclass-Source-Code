#include <iostream>

// function declairation - prototype
// void print_my_name(std::string & name); // can not use const char *
// void print_my_name(const std::string & name); // copy
// void print_my_name(std::string_view & name); // wrong
void print_my_name(std::string_view name);

int main() {
    // std::string name{"Sejung"};
    // std::cout << "name is " << name << std::endl;
    // std::cout << "name's address is " << &name << std::endl;

    // print_my_name(name);
    print_my_name("Sejung");

    // std::cout << "name is " << name << std::endl;
    // std::cout << "name's address is " << &name << std::endl;
    
    return 0;
}

// function declairation
void print_my_name(std::string_view name) {
    // name = "Sejung1";
    std::cout << "my name is " << name << std::endl;
    std::cout << "address is " << &name << std::endl;
}