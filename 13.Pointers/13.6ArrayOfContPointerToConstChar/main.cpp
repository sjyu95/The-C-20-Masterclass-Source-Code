#include <iostream>

int main() {
    const char * students[] = {
        "Sejung Yoo",
        "SuckJun Kim"
    };

    for (const auto name : students) {
        std::cout << name << std::endl;
    }

    const char * student3 = "JaeJun Jeon";
    students[1] = student3;
    for (const auto name : students) {
        std::cout << name << std::endl;
    }

    const char * const /*const pointer*/ students1[] = {
        "Sejung Yoo",
        "SuckJun Kim"
    };
    //student1[1] = student3; // error

    return 0;
}