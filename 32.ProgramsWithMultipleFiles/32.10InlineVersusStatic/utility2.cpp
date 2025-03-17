#include <iostream>

inline int age{10};
inline void print_age_2(){
	std::cout << "2. age : " << age << ", &age : " << &age << std::endl;
}

void some_function_2() {
	print_age_2();
}

namespace {
	double distance{10.1};
	void print_distance_2() {
		std::cout <<"2. distance : " << distance << ", &distance: " << &distance << std::endl;
	}
}

void some_distance_function_2() {
	print_distance_2();
}