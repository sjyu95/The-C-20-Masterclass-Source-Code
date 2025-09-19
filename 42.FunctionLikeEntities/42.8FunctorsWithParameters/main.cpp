#include <concepts>
#include <iostream>
#include "boxcontainer.h"

template <typename T>
requires std::is_arithmetic_v<T>
class IsInRange {
public:
    IsInRange(T min, T max) : m_min{min}, m_max{max} {}
    bool operator() (T a) {
        return ((m_min <= a) && (m_max >= a));
    }
private:
    T m_min{};
    T m_max{};
};

template <typename T, typename RangePicker>
requires std::is_arithmetic_v<T>
class RangeSum {
public:
    RangeSum(BoxContainer<T> box, RangePicker is_in_range) : m_container{box}, m_rangePicker{is_in_range} {}
    T operator() () {
        T sum{};
        for (size_t i{}; i < m_container.size(); ++i) {
            if (m_rangePicker(m_container.get_item(i))) {
                sum += m_container.get_item(i);
            }
        }
        return sum;
    }
private:
    BoxContainer<T> m_container;
    RangePicker m_rangePicker;
};

int main() {
    BoxContainer<double> boxes1;
    boxes1.add(10.1);
    boxes1.add(20.1);
    boxes1.add(30.1);
    boxes1.add(40.1);

    RangeSum<double, IsInRange<double>> sumFunctor(boxes1, IsInRange<double>(10,40));
    std::cout << "double sum : " << sumFunctor() << std::endl;

    return 0;
}