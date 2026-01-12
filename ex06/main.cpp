#include "Harl.hpp"
#include <iostream>



int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Provide one argument" << std::endl;
		return 1;
	}
	Harl harl;

	harl.complain(argv[1]);
}