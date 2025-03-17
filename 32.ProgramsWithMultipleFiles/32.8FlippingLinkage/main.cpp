#include <iostream>

extern const double distance;  // internal linkage -> external linkage
const double distance{3.5};

void print_distance();
// void print_distance() {
// 	std::cout << "distance : " << distance << ", &distance : " << &distance << std::endl;
// }

int main(int argc, char** argv) {
	print_distance();
	return 0;
}