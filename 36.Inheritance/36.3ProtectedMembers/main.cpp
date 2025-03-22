#include <iostream>
#include "person.h"
#include "player.h"

int main() {
    Player p{"hally gally", "John", "Snow"};
    std::cout << p;
    p.getFirstName();

    return 0;
}