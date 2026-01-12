#ifndef HUMAN_B_H
# define HUMAN_B_H

#include <string>
#include "Weapon.hpp"

class HumanB
{
	private:
		Weapon*		weapon;
		std::string	name;
	
	public:
		HumanB(std::string name);
		~HumanB();

		void	setWeapon(Weapon& weapon);
		void	attack();

};

#endif