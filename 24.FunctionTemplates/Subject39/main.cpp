#include <string>

template <typename T>
int hunt_down( T value,  T* collection, unsigned int size)
{
	for (unsigned int i{ 0 }; i < size; i++) {
		if (collection[i] == value) {
			return i; // Found it; return the index.
		}
	}
	return -1; 
}

template <>
int hunt_down<const char *>(const char * value, const char ** collection, unsigned int size) 
{
    for (unsigned int i{ 0 }; i < size; i++) {
		if (std::strcmp(collection[i], value) == 0) {
			return i; // Found it; return the index.
		}
	}
    return -1;   
}

int main (int argc, char** argv) {
    std::string student_to_find{ "Kumar" };
    const char* students[]{ "Mary", "Steve", "Kumar", "Ahmed" };
    int index{ hunt_down(student_to_find.c_str(), students, 4) };

    return 0;
}