#include "ZombieEvent.hpp"


ZombieEvent::ZombieEvent()
{
}

ZombieEvent::~ZombieEvent()
{
}

void ZombieEvent::setZombieType(std::string type){
    this->ZombieType = type;
}

Zombie *ZombieEvent::newZombie(std::string name){
    Zombie *dead = new Zombie;
    dead->name = name;
    dead->type = ZombieType;
    return dead;
}

std::string ZombieEvent::getZombieType(){
    return ZombieType;
}

Zombie *ZombieEvent::randomChump(){
    char name[6];
    static const char *templates = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < 5; i++){
        name[i] = templates[rand() % (sizeof(templates) - 1)];
    }
    name[5] = '\0';

    Zombie *dead = new Zombie;
    dead->name = name;
    dead->type = getZombieType();
    dead->announce();
    return dead;
}