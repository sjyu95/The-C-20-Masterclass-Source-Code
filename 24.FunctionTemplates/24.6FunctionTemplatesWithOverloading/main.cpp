#include <string>
#include "utils.h"

int main(int argc, char** argv) {
    std::string a{"hello"}, b{"world"};
    
    maximum(a, b); // use template function
    maximum(a.c_str(), b.c_str()); // overloaded raw function

    int c{0}, d{1};
    maximum(c, d);  // use template function
    auto result = maximum(&c, &d); // use template function ?? no use pointer

    return 0;
}