#include <iostream>

int dog_count{};

void inc_student_count();

int main(int argc, char** argv) {
    for (size_t i{}; i < 10; i++) {
        inc_student_count();
        std::cout << "dog_count : " << dog_count << std::endl;
        // std::cout << "student_count : " << student_count << std::endl;    
    }
    return 0;
}

void inc_student_count() {
    static unsigned student_count{};
    std::cout << "student count : " << student_count << std::endl;
    student_count++;
    dog_count++;
}
