#include <iostream>
#include <memory>
#include "dog.h"
#include "person.h"

int main(int argc, char** argv) {
    std::shared_ptr<Dog> dog1 = std::make_shared<Dog>("Snoopy1");
    std::weak_ptr<Dog> dog2 = dog1;
    auto dog3 = dog2.lock();
    if (dog3) {
        dog3->printName();
    }

    std::shared_ptr<Person> alice = std::make_shared<Person>("Alice");
    std::shared_ptr<Person> beth = std::make_shared<Person>("Beth");

    alice->setFriend(beth);
    beth->setFriend(alice);

    return 0;
}