#include "Harl.hpp"
#include <iostream>

Harl::Harl() {};

Harl::~Harl(){};

void Harl::debug(void)
{
	std::cout << "Debug message\n";
}
void Harl::info(void)
{
	std::cout << "Info message\n";
}
void Harl::warning(void)
{
	std::cout << "Warning message\n";
}
void Harl::error(void)
{
	std::cout << "Error message\n";
}

int Harl::getLevel(std::string level) {
	if (level == "DEBUG")
		return 0;
	if (level == "INFO")
		return 1;
	if (level == "WARNING")
		return 2;
	if (level == "ERROR")
		return 3;
	return -1;
}

void	Harl::complain(std::string levelStr)
{
	int level = getLevel(levelStr);
	switch (level)
	{
		case 0:
			debug();
		case 1:
			info();
		case 2:
			warning();
		case 3:
			error();
			break;
		default:
			std::cout << "Invalid level" << std::endl;
			break;
	}
}

