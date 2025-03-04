#include <iostream>
#include "dog.h"

int main(int argc, char** argv) {
    const Dog dog("Happy", "Sheperd", 4);

    // auto& info = dog.compiled_info();
    // const std::string& info = dog.compiled_info();
    // std::cout << "info : " << info << std::endl;

    const unsigned& jumped_age = dog.jump_age();
    std::cout << "jumped age : " << jumped_age << std::endl;

    return 0;
    
}