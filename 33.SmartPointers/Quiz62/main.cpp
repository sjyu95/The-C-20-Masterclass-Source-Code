#include <iostream>
#include <memory>

struct Point {
    Point (double x, double y) : m_x(x), m_y(y) {}
    ~Point(){
        std::cout << "Point object dying" << std::endl;
    }
    double m_x{};
    double m_y{};
};

class Line{
    public :
    Line(std::shared_ptr<Point> start, std::shared_ptr<Point> end)
        : m_start(start), m_end(end)
        {};

    double start_x() const{
        return m_start->m_x;
    }
    double start_y() const{
        return m_start->m_y;
    }

    double end_x() const{
        return m_end->m_x;
    }
    double end_y() const{
        return m_end->m_y;
    }

    void print_info() const{
        std::cout << "Start [" << m_start->m_x << ","
            << m_start->m_y << "]";
    }

    private :
    std::shared_ptr<Point> m_start{};
    std::shared_ptr<Point> m_end{};
};

int main()
{
    std::unique_ptr<Point> p1 = std::make_unique<Point>(1,1);
    std::unique_ptr<Point> p2 = std::make_unique<Point>(2,2);
    {
        Line l1(std::move(p1),std::move(p2));
    //  Line l1(p1,p2);
    }
    // std::cout << "value : " << p1->m_x << std::endl;

    return 0;
}