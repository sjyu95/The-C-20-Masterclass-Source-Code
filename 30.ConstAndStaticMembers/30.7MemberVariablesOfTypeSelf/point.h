class Point {
  public:
    Point(double x, double y);
    inline static size_t CALL_COUNT{0};

    // Point m_point;
    // const Point m_point;
    static Point s_point1;
    Point * m_point2{};

    static void printInfo();

    void initialize_pointer();

  private:
    double m_x{};
    double m_y{};
  };