#include "Zombie.hpp"
#include <iostream>

Zombie* zombieHorde(int N, std::string name);

void	announceAll(int N, Zombie* zombies)
{
	for(int i = 0; i < N; i++)
		zombies[i].announce();
}

int	main(void)
{
	int	N;
	Zombie*	zombies;
	
	// Empty horde
	std::cout << "Empty horde\n" << std::endl;
	N = 0;
	zombies = zombieHorde(N,"A");
	announceAll(N, zombies);
	delete[] zombies;

	// Empty name
	std::cout << "Empty name\n" << std::endl;
	N = 3;
	zombies = zombieHorde(N,"");
	announceAll(N, zombies);
	delete[] zombies;

	// Normal case
	std::cout << "Normal case\n" << std::endl;
	N = 3;
	zombies = zombieHorde(N,"B");
	announceAll(N, zombies);
	delete[] zombies;

	// Long case
	std::cout << "Long case\n" << std::endl;
	N = 10;
	zombies = zombieHorde(N,"C");
	announceAll(N, zombies);
	delete[] zombies;
}