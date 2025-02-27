#include "utilities.h"

template <>
int hunt_down<const char*> (const char* value, const char** collection, unsigned int size)
{
    for (unsigned int i{ 0 }; i < size; i++) {
        if (strcmp(collection[i], value) == 0) {
            return i; // Found it; return the index.
        }
    }
    return -1; 
}