#include <iostream>
#include <fstream>
#include <string>

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cerr << "Please provide 3 arguments" << std::endl;
		return (1);
	}
	const std::string fileName = argv[1];
	const std::string s1 = argv[2];
	int s1Len = s1.length();
	const std::string s2 = argv[3];
	int s2Len = s2.length();
	std::string buffer;
	std::ofstream outFile(fileName + ".replace");
	std::ifstream inFile(fileName);
	size_t indexToReplace;

	while (std::getline(inFile, buffer))
	{
		size_t curIndex = 0;
		while (curIndex < buffer.length())
		{
			indexToReplace = buffer.find(s1, curIndex);
			if (indexToReplace == std::string::npos)
				break;
			buffer.erase(indexToReplace, s1Len);
			buffer.insert(indexToReplace, s2);
			curIndex = indexToReplace + s2Len;
		}
		outFile << buffer.append("\n");
	}
}
