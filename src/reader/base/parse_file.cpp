#include "parse_file.h"
#include <fstream>
#include <iostream>

std::vector<std::string> parseFile(std::string location)
{
	std::vector<std::string> lines;
	std::ifstream file;
	std::string line;
	file.open(location);
	if (file.is_open())
	{
		while(std::getline(file,line))
		{
			lines.push_back(line);
		}
	}
	return lines;
}