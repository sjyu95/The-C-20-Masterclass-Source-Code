#include <iostream>
#include "dog.h"

int main(int argc, char** argv) {
    const Dog dog("Happy", "Sheperd", 4);

    for (size_t i{}; i < 10; i++) {
        dog.print_info();
    }

    return 0;
    
}