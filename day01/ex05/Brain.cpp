
#include "Brain.hpp"
#include <sstream>

Brain::Brain(/* args */)
{
    setAddress();
}

Brain::~Brain()
{
}

std::string Brain::identify(){
    return this->_brain_address;
}
void Brain::setAddress(void)
{
    std::stringstream buffer;
    buffer << this;
    this->_brain_address = buffer.str();
}