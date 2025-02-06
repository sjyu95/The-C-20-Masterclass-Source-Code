#include <iostream>

int main() {
    // char message[] = {'h','e','l','l','o'}; // missing null terminate
    // char message[5] = {'h','e','l','l','o'}; // missing null terminate
    //char message[6] = {'h','e','l','l','o'}; // initialize null terminate
    // char message[] = {"hello"}; // using string literal
    // char message[] = {"hello"}; // using string literal
    char message[] = "hello"; // using string literal

    std::cout << message << ", sizeof " << std::size(message) << std::endl;

    return 0;
}