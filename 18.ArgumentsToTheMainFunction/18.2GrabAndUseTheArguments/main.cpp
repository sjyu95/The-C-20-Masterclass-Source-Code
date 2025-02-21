#include <iostream>

// int main(int argc, char** argv) {
int main(int argc, char* argv[]) {
    for (size_t i{}; i < argc; i++) {
        std::cout << "argument [" << i << "] : " << argv[i] << std::endl; 
    }

    return 0;
}