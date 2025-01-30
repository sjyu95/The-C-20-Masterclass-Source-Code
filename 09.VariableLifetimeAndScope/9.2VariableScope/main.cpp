#include <iostream>

constinit int global_var{10};

void some_func() {
    int local_var_in_func{3};
    std::cout << "local_var in func is " << local_var_in_func << std::endl;
}

int main() {
    int local_var{1};
    int local_var2{12};

    {
        int local_var{2};
        std::cout << "local_var is " << local_var << std::endl;
        std::cout << "local_var2 is " << local_var2 << std::endl;
    }

    std::cout << "local_var is " << local_var << std::endl;
    std::cout << "global_var is " << global_var << std::endl;

    some_func();

    return 0;
}