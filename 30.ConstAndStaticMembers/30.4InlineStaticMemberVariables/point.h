class Point {
  public:
    Point(double x, double y);
    inline static size_t CALL_COUNT{0};

  private:
    double m_x{};
    double m_y{};
  };