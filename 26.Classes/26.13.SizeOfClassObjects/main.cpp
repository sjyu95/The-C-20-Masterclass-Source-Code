#include <iostream>

class Dog {
private:
    int leg_count{4};
    // int age{1};
};

int main(int argc, char** argv) {
    std::cout << "sizeof(int) : " << sizeof(int) << std::endl;
    std::cout << "sizeof(Dog) : " << sizeof(Dog) << std::endl;

    std::string message{"aa"};
    std::cout << "sizeof(std::string) : " << sizeof(std::string) << std::endl;
    std::cout << "sizeof(message) : " << sizeof(message) << std::endl;

    return 0;
}