#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
    std::cout << "zombie " << this->name << " killed" << std::endl; 
}

void Zombie::announce(){
	std::cout << "<" << this->name << " (" << this->type << ")> Braiiiiiiinnnssss..." << std::endl;
}

Zombie *Zombie::randomChump(){
    char name[6];
    static const char *templates = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < 5; i++){
        name[i] = templates[rand() % (sizeof(templates) - 1)];
    }
    name[5] = '\0';

    Zombie *dead = new Zombie;
    dead->name = name;
    dead->type = getZombieType();
    return dead;
}

Zombie *Zombie::newZombie(std::string name){
    Zombie *dead = new Zombie;
    dead->name = name;
    dead->type = type;
    return dead;
}

std::string Zombie::getZombieType(){
    return type;
}