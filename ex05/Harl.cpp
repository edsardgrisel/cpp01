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

void Harl::complain(std::string level)
{
	std::string levelArray[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*ptrToMemberFuncs[4])(void)  = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for(int i = 0; i < 4; i++)
	{
		if (level == levelArray[i])
		{
			(this->*ptrToMemberFuncs[i])();
			return;
		}
	}
	std::cout << "Level not found" << std::endl;
}