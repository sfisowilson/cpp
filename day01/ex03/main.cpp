#include "ZombieHorde.hpp"

int main(){

    ZombieHorde *bunch = new ZombieHorde(10);
    bunch->announce();
    delete bunch;

    return 0;
}