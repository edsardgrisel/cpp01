#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() : name("Nameless") {}

Zombie::Zombie(std::string name) : name(name) {}

Zombie::~Zombie()
{
	std::cout << "Destructor called on " << this->name << std::endl;
}


void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n" << std::endl;
}




