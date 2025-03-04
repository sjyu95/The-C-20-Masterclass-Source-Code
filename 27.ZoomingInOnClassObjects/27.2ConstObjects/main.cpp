#include "dog.h"

int main(int argc, char** argv) {
    // const Dog dog("Happy", "Sheperd", 4);
    // Dog dog("Happy", "Sheperd", 4);
    Dog dog("Happy", "Sheperd", 4);
    dog.print_info();

    Dog* p_dog{&dog};
    p_dog->print_info();
    
    Dog& r_dog{dog};
    r_dog.print_info();
    
    // Dog* p_dog2 = new Dog("Happy2", "Sheperd", 3);
    Dog* p_dog2{new Dog("Happy2", "Sheperd", 3)};
    p_dog2->print_info();
    delete p_dog2;

    const Dog* p_dog3{new Dog("Happy2", "Sheperd", 3)};
    // p_dog3->print_info();
    delete p_dog3;

    const Dog& r_dog4{dog};
    // r_dog4.print_info();

    return 0;
    
}