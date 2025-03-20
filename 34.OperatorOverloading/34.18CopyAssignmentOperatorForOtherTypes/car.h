#ifndef CAR_H
#define CAR_H

#include <iostream>

class Car {
    friend std::ostream& operator<< (std::ostream& os, const Car& car);
public:
    Car() = default;
    Car(std::string_view name, int speed);

    int get_speed() const;
private:
    std::string m_name;
    int m_speed{};
};

inline std::ostream& operator<< (std::ostream& os, const Car& car) {
    os << "Car name : " << car.m_name << ", speed : " << car.get_speed() << std::endl;
    return os;
}

#endif