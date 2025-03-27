#include <iostream>
#include <vector>

template <typename T>
concept Ostreamable = requires (std::ostream& os, T d) {
	os << d;
};

template <typename T>
std::ostream& operator<< (std::ostream& os, const std::vector<T>& vec) {
	for (auto a : vec) {
		os << a;
	}
	return os;
}

class Point {
	friend std::ostream& operator<< (std::ostream& os, const Point& rhs) {
		os << "(" << rhs.m_a << ", " << rhs.m_b << ") ";
		return os;
	}
public:
	Point() = default;
	Point(int a, int b) : m_a{a}, m_b{b} {}

private:
	int m_a{};
	int m_b{};
};

int main() {
	std::vector<int> a{1,2,3,4,5};
	// std::cout << a << std::endl;

	std::vector<Point> b{Point{1,2}, Point{3,4}};
	std::cout << b << std::endl;
}