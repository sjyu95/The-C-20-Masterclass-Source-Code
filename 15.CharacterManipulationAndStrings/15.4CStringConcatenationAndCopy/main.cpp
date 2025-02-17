#include <iostream>
#include <cstring>

int main() {
    // strcat, strncat, strcpy, strncpy
    const size_t DEST_SIZE{50};

    char dest[DEST_SIZE] {"It's my world~"};
    const char * src {"It's beautiful!"};

    std::strcat(dest, src);
    std::cout << dest << std::endl;

    std::strncat(dest, " and ...", 4);
    std::cout << dest << std::endl;

    std::strcpy(dest, src);
    std::cout << dest << std::endl;

    strcat(dest + std::strlen(dest), " and ");
    std::strcpy(dest + std::strlen(dest), src);
    std::cout << dest << std::endl;

    return 0;
}