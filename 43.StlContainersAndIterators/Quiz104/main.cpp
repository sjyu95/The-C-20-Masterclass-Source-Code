#include "exercise.h"

int main() {
    std::list<int> l1 = {3, 4, 5,7,11};
    std::list<int> l2 = {1,4,6,7,9};

    print_list(union_func(l1, l2));

    return 0;
}