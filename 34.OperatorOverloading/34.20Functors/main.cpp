#include <iostream>
#include <string>

class Print{
public:
    void operator() (std::string_view name) {
        std::cout << name << std::endl;
    }
    std::string operator() (std::string name1, std::string name2) {
        return name1 + " " + name2;
    }
};

void do_something(Print& p) {
    p("snow");
}

Print do_something2() {
    Print p;
    return p;
}


int main() {
    Print p;
    p("John");
    std::cout << p("John", "Snow") << std::endl;

    do_something(p);

    Print p2 = do_something2();
    p2("hello");

    return 0;
}