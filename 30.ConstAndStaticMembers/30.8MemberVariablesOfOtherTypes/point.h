#ifndef POINT_H
#define POINT_H

#include "integer.h"

class Point {
public:
  Point() = default;
  Point(int x, int y);
  Point(const Point & p);
  Point(Point && p);

  Integer m_a;
  const Integer m_b;

  static Integer s_c;
  inline static Integer s_d{4};

  int getX() const { return m_x.get(); }
  int getY() const { return m_y.get(); }
  void setX(int x) { m_x = Integer{x}; }
  void setY(int y) { m_y = Integer{y}; }

private:
  Integer m_x{};
  Integer m_y{};
};

#endif