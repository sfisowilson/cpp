#include "Pony.hpp"

Pony::Pony(std::string loc){
	std::cout << "Pony Created on the " << loc << std::endl;
	Pony::_location = loc;
}

Pony::~Pony(){
	std::cout << "Pony from "<< Pony::_location << " destroyed " << std::endl;
}

void Pony::getPonyDetails(){
	std::cout << "Im a " << Pony::_color << " color pony, named " << Pony::_name << "." << std::endl;
	std::cout << "a " << Pony::_gender << " pony with " << Pony::_number_of_legs << " legs." << std::endl;
}

void Pony::setPonyDetails(std::string Name, int legs, std::string sex, std::string colour){
	Pony::_gender = sex;
	Pony::_number_of_legs = legs;
	Pony::_name = Name;
	Pony::_color = colour;
}