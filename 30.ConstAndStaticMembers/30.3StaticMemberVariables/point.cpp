#include "point.h"

// size_t Point::CALL_COUNT{0};

Point::Point(double x, double y) : m_x(x), m_y(y) {
	CALL_COUNT++;
}