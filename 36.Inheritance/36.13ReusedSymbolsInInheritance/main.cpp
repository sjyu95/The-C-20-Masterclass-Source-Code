#include "child.h"

int main() {
    Child child{3};
    child.print_member_value();

    child.Parent::print_member_value();
    return 0;
}