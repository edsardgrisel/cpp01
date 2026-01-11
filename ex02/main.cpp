#include <string>
#include <iostream>

int	main(void)
{
	std::string originalStr = "HI THIS IS BRAIN";
	std::string* stringPTR = &originalStr;
	std::string& stringREF = originalStr;

	// The memory address of the string variable
	std::cout << "The memory address of the string variable: " << &originalStr << "\n" << std::endl;

	// The memory address held by stringPTR.
	std::cout << "The memory address held by stringPTR: " << stringPTR << "\n" << std::endl;

	// The memory address held by stringREF
	std::cout << "The memory address held by stringREF: " << &stringREF << "\n" << std::endl;

	//  The value of the string variable
	std::cout << " The value of the string variable: " << originalStr << "\n" << std::endl;

	// The memory address held by stringREF
	std::cout << "The value pointed to by stringPTR: " << *stringPTR << "\n" << std::endl;

	// The value pointed to by stringREF
	std::cout << "The value pointed to by stringREF: " << stringREF << "\n" << std::endl;
}