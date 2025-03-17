#include <iostream>

inline int age{10};
inline void print_age_1(){
	std::cout << "1. age : " << age << ", &age : " << &age << std::endl;
}

void some_function_1() {
	print_age_1();
}

static double distance{10.1};
static void print_distance_1() {
	std::cout <<"1. distance : " << distance << ", &distance: " << &distance << std::endl;
}

void some_distance_function_1() {
	print_distance_1();
}