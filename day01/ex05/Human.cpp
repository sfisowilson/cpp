#include "Human.hpp"

Human::Human(/* args */)
{
}

Human::~Human()
{
}

std::string Human::identify(){
    return this->_brain.identify();
}

Brain Human::getBrain(){
    return this->_brain;
}
