#include "person.h"
#include "player.h"

Player::Player(std::string_view game, std::string_view firstName, std::string_view lastName) : m_game(game) {
    m_firstName = firstName;
    m_lastName = lastName;
}

std::ostream& operator<< (std::ostream& os, const Player& player) {
    os << "Player game : " << player.m_game << ", name : " << player.m_firstName << " " << player.m_lastName << std::endl;
    return os;
}
