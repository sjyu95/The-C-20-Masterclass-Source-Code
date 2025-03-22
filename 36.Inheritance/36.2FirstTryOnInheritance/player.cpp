#include "person.h"
#include "player.h"

Player::Player(std::string_view game) : m_game(game) {}

std::ostream& operator<< (std::ostream& os, const Player& player) {
    os << "Player game : " << player.m_game << ", name : " << player.getFirstName() << " " << player.getLastName() << std::endl;
    return os;
}
