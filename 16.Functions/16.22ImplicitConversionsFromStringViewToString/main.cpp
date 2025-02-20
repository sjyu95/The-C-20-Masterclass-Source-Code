#include <iostream>

// function declairation - prototype
void say_name(std::string_view name);
void print_my_name(const std::string & name); // copy

int main() {

    say_name("Sejung");
    
    return 0;
}

// function declairation
void say_name(std::string_view name){
    std::cout << "my name (string_view) is " << name << std::endl;
    std::cout << "address (string_view) is " << &name << std::endl;

    // print_my_name(name);
    print_my_name(std::string(name));
}

void print_my_name(const std::string & name) {
    // name = "Sejung1";
    std::cout << "my name is " << name << std::endl;
    std::cout << "address is " << &name << std::endl;
}