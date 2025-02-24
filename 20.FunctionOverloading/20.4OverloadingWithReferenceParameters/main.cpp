#include <iostream>

double max(double a, double b);
// int max(int& a, int& b);
int max(const int& a, const int& b);
// void say_my_name(std::string_view a);
void say_my_name(const std::string& a);

int main(int argc, char** argv) {
    char a{'a'}, b{'b'};

    max(a, b); // 1.const &, 2.double, 3.&
    say_my_name("sejung");

    return 0;
}

double max(double a, double b) {
    std::cout << "max non reference" << std::endl;
    return (a > b) ? a : b;
}

// int max(int& a, int& b) {
int max(const int& a, const int& b) {
    std::cout << "max reference" << std::endl;
    return (a > b) ? a : b;
}

// void say_my_name(std::string_view a) {
//     std::cout << "string_view : " << a.data() << std::endl;
// }

void say_my_name(const std::string& a) {
    std::cout << "const string referend : " << a.c_str() << std::endl;
}