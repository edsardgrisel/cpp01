#include <string>
#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : name(name) {}
HumanB::~HumanB() {}

void	HumanB::setWeapon(Weapon& weapon) 
{
	this->weapon = &weapon;
}

void	HumanB::attack()
{
	if (this->weapon)
		std::cout << this->name << "  attacks with their " << (*this->weapon).getType() << std::endl;
	else
		std::cout << this->name << "  attacks without a weapon" << std::endl;
}