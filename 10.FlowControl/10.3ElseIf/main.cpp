#include <iostream>

constexpr int pen{10}, marker{20}, erasier{30};
constexpr int retangle{100}, triangle{200}, ellipse{300};
    
int main(){
    int tool{pen};

    if (tool == pen) {
        std::cout << "Active tool is pen." << std::endl;
    }
    if (tool == marker) {
        std::cout << "Active tool is marker." << std::endl;
    }
    if (tool == erasier) {
        std::cout << "Active tool is erasier." << std::endl;
    }
    if (tool == retangle) {
        std::cout << "Active tool is retangle." << std::endl;
    }
    if (tool == triangle) {
        std::cout << "Active tool is triangle." << std::endl;
    }
    if (tool == ellipse) {
        std::cout << "Active tool is ellipse." << std::endl;
    }

    std::cout << "Moving on " << std::endl;

    return 0;
}