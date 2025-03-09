class Point {
  public:
    Point(double x, double y);

    static double getCallCount();
    static void printInfo(const Point& point);

  private:
    inline static size_t CALL_COUNT{0};

    double m_x{};
    double m_y{};
  };