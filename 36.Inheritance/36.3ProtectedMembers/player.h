#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>

class Person;

class Player : public Person {
friend std::ostream& operator<< (std::ostream& os, const Player& player);
public:
    Player() = default;
    Player(std::string_view game, std::string_view firstName, std::string_view lastName);

private:
    std::string m_game;
};

#endif