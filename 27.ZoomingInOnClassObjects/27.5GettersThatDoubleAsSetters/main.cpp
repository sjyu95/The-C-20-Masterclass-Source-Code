#include <iostream>
#include "dog.h"

void function_call(Dog dog) {
    dog.print_info();
}

void function_call_1(Dog& dog) {
    dog.name() = "Lilly";
    dog.age() = 13;
    dog.print_info();
}
void function_call_2(const Dog& dog) {
    dog.print_info();
}

void function_call_3(Dog* dog) {
    dog->name() = "Bath";
    dog->age() = 14;
    dog->print_info();
}
void function_call_4(const Dog* dog) {
    dog->print_info();
}

int main(int argc, char** argv) {
    const Dog dog("Happy", "Sheperd", 4);
    std::cout << "address : " << &dog << std::endl;
    function_call(dog);

    const Dog& r_dog2{dog};
    function_call_2(r_dog2);

    const Dog* p_dog4{&dog};
    function_call_4(p_dog4);    

    Dog dog1;
    Dog& r_dog1{dog1};
    function_call_1(r_dog1);

    Dog* p_dog3{&dog1};
    function_call_3(p_dog3);    

    return 0;
    
}