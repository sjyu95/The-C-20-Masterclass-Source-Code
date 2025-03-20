#include "car.h"

Car::Car(std::string_view name, int speed) : m_name{name}, m_speed{speed} {}

int Car::get_speed() const {
    return m_speed;
}