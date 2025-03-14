#include <iostream>

namespace parents {
    int age{43};

    namespace child {
        int age{14};

        void printAge() {
            std::cout << "Child------" << std::endl;
            std::cout << "Age of child is " << age << std::endl;
            std::cout << "Parents age is " << parents::age << std::endl;
        }
    }

    void printAge() {
        std::cout << "Parents------" << std::endl;
        std::cout << "Age of parents is " << age << std::endl;
        std::cout << "Age of child is" << child::age << std::endl;
        child::printAge();
    }
}

int main(int argc, char** argv) {
    parents::printAge();
    parents::child::printAge();
    return 0;
}