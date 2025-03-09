class Point {
public:
	Point(double x, double y);
	static size_t CALL_COUNT;
	// inline static size_t CALL_COUNT{0};

	// static const size_t CALL_COUNT{};

	// constexpr static const size_t CALL_COUNT{0};
	// constexpr static size_t CALL_COUNT{0}; // wrong. ++ imposssible

private:
	double m_x{};
	double m_y{};
};