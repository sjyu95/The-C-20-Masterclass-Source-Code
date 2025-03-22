#include <iostream>
#include "civilengineer.h"
#include "engineer.h"
#include "person.h"

int main() {
    CivilEngineer ce1{"Sejung"};
    std::cout << "FirstName : " << ce1.getFirstName() << std::endl;

    return 0;
}