#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name){}

HumanB::~HumanB(){}

void HumanB::setWeapon(Weapon& weapon){
    this->_weapon = &weapon;
    return ;
}

void HumanB::attack(void){
    std::cout << this->_name << " attacks with his " << this->_weapon->getType();
    std::cout << std::endl;
    return ;
}