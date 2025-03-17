#include <iostream>

extern const double distance;
void print_distance() {
	std::cout << "distance : " << distance << ", &distance : " << &distance << std::endl;
}