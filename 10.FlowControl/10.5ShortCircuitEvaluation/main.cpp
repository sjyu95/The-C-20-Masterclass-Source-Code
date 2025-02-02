#include <iostream>

bool house() {
    std::cout << "I have house." << std::endl;
    return true;
}

bool car() {
    std::cout << "I have a car." << std::endl;
    return true;
}

bool job() {
    std::cout << "I have a job." << std::endl;
    return false;
}

bool spouse_and_children() {
    std::cout << "I have a family." << std::endl;
    return true;
}

int main(){
    if (house() || car() || job() || spouse_and_children()) {
        std::cout << "I am happy." << std::endl;
    }
    else {
        std::cout << "I am sad." << std::endl;
    }

    return 0;
}