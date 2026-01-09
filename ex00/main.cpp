#include "Zombie.hpp"

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

int	main()
{
	// Default constructor
	Zombie	nameless;
	nameless.announce();

	// Empty parameterized constructor
	Zombie emptyZombie("");
	emptyZombie.announce();

	// Parameterized constructor
	Zombie namedZombie("zombie_1");
	namedZombie.announce();

	// newZombie
	Zombie* heapZombie = newZombie("zombie_2");
	heapZombie->announce();
	delete heapZombie;

	// Test randomChump (stack allocation)
	randomChump("zombie_3");
}