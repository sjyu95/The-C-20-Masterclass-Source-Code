#include <iostream>
#include "compare.h"
#include "operations.h"

int main(){

    int x {5};
    int y{12};

    int result = min(x,y);
    std::cout << "min : " << result << std::endl;

    result =inc_mult(x,y);
    std::cout << "result : " << result << std::endl;

    return 0;
}