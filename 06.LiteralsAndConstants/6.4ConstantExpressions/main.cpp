#include <iostream>

int main() {
	constexpr int SOME_LIB_VERSION{1234};
	constexpr double PI{3.14};
	const double radius{6};
	constexpr double area_of_circle{ radius * PI };

	static_assert( SOME_LIB_VERSION == 1234);

	std::cout << "area of circle is " << area_of_circle << std::endl;

	return 0;
}