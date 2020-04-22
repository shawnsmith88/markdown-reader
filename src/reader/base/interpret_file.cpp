#include "interpret_file.h"

#include <iostream>

FileData interpret(std::vector<std::string> input)
{
	FileData interpreted;
	std::vector<std::string> file_input=input;
	for (int i=0; i<file_input.size(); i++)
	{
		std::string line=file_input.at(i);
		ParsedLine parsed=parse(line);
		interpreted.addLine(parsed);
	}
	return interpreted;
}