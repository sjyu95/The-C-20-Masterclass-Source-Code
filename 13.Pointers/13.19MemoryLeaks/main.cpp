#include <iostream>

int main() {
    int * p_number{ new int{3} };
    // delete p_number;

    p_number = new int{4};
    // delete p_number;

    int number{5};
    p_number = &number;

    {
        int * p_number{new int{6}};
        // delete p_number;
    }

    return 0;
}