#include <cstring>

template <typename T> T maximum(T a, T b) {
    return (a > b) ? a : b;
}

const char * maximum(const char* a, const char* b) {
    return (std::strcmp(a,b) > 0) ? a : b;
}

template <typename T> T* maixmum(T* a, T* b) {
    retrun (*a > *b) ? a : b;
}