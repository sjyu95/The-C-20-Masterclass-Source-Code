#include "animal.h"
#include "bird.h"
#include "cat.h"
#include "crow.h"
#include "dog.h"
#include "feline.h"
#include "pigeon.h"

int main() {
    Crow crow{"black", "crow"};
    Cat cat{"short", "cat"};
    Dog dog{"long", "dog"};
    Pigeon pigeon{"black&white", "pigeon"};

    Animal* animals[]{&crow, &cat, &dog, &pigeon};
    for (auto a : animals) {
        a->breathe();
    }

    Feline* Feline[]{&dog, &cat};
    for (auto f : Feline) {
        f->run();
    }

    Bird* birds[]{&crow, &pigeon};
    for (auto b : birds) {
        b->fly();
    }

}