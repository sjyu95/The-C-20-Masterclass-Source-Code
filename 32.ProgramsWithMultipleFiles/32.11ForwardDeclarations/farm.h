#ifndef FARM_H
#define FARM_H

class Dog;

class Farm{
public:
    void UseDog(const Dog& dog);
private:
    int mDogCount{};
};

#endif