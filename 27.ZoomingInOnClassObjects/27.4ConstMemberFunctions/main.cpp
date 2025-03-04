#include <iostream>
#include "dog.h"

void function_call(Dog dog) {
    dog.print_info();
}

void function_call_1(Dog& dog) {
    dog.print_info();
}
void function_call_2(const Dog& dog) {
    dog.print_info();
}

void function_call_3(Dog* dog) {
    dog->print_info();
}
void function_call_4(const Dog* dog) {
    dog->print_info();
}

int main(int argc, char** argv) {
    const Dog dog("Happy", "Sheperd", 4);
    std::cout << "address : " << &dog << std::endl;
    function_call(dog);

    const Dog& r_dog{dog};
    function_call_2(r_dog);

    const Dog* p_dog{&dog};
    function_call_4(p_dog);    

    return 0;
    
}