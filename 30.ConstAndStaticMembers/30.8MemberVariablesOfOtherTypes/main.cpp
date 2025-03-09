#include <iostream>
#include "point.h"

int main(int argc, char** argv) {
	Point p1{1,2};
	std::cout << "p1 - x : " << p1.getX() << ", y : " << p1.getY() << std::endl;
	p1.m_a.set(10);
	std::cout << "m_a : " << p1.m_a.get() << std::endl;
	// p1.m_b.set(10);

	std::cout << "s_c : " << Point::s_c.get() << std::endl;
	std::cout << "s_d : " << Point::s_d.get() << std::endl;

	return 0;
}