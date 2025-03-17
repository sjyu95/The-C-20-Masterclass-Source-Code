#include "dog.h"
#include "farm.h"

int main(int argc, char** argv) {
    Dog dog("Snoopy");
    Farm farm1;
    farm1.UseDog(dog);
    return 0;
}