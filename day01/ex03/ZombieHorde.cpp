#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int zombieCount)
{
    Zombie **zombiesArr = new Zombie*[zombieCount];
    zombieLen = zombieCount;

    Zombie zombie;
    std::cout << "contruct len = " << zombieCount;

    for (int i = 0; i < zombieCount; i++){
        zombiesArr[i] = zombie.randomChump();
    }
    zombies = zombiesArr;
}

ZombieHorde::~ZombieHorde()
{
    for (int i = 0; i < zombieLen; i++){
        delete zombies[i];
    }
    delete zombies;
}

void ZombieHorde::announce(){
    for (int i = 0; i < zombieLen; i++){
        zombies[i]->announce();
    }
}

