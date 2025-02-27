#include <iostream>
#include <string>

template <typename T>
// int hunt_down(T find_to, const T[] collection, size_t size) {
int hunt_down(const T& find_to, const T* collection, size_t size) {
    for (int i{}; i < size; i++) {
        if (find_to == collection[i])
            return i;
    }
    return -1;
}

int main(int argc, char** argv) {
    const std::string students[] {"Steve","Karly","Sally","Salim"} ;
    std::string to_find{"Steve"};
    std::cout << "index is " << hunt_down(to_find,students,4) << std::endl;

    const unsigned int ids[] {1122,4432,7828,9022,3903,3015,2072};
    unsigned int id_to_find {2222} ;
    std::cout << "index is " << hunt_down(id_to_find,ids,7) << std::endl;

    return 0;
}