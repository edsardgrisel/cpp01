#include <iostream>
#include <string>
#include <fstream>

void	createAndFillFile(const std::string fileName, const std::string fileContent)
{
	std::ofstream file(fileName);
	file << fileContent;
}

int	main(void)
{
	// Single line
	std::cout << "Test single line\n";
	createAndFillFile("single_line.txt", "hello world");

	int result = std::system("./EX04 single_line.txt hello hi");
	if (result != 0)
		std::cout << "Single line failed. Program returned " << result << std::endl;

	// Multi line
	std::cout << "Test multi line\n";
	createAndFillFile("multi_line.txt", "hello world\nGood bye");

	result = std::system("./EX04 multi_line.txt o x");
	if (result != 0)
		std::cout << "multi line failed. Program returned " << result << std::endl;
	
}