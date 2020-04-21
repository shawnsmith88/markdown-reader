#include "interpret_file.h"

FileData* interpret(std::vector<std::string> input)
{
	FileData* interpreted=new FileData();
	std::vector<std::string> file_input=input;
	for (int i=0; i<file_input.size(); i++)
	{
		std::string line=file_input.at(i);
		ParsedLine* parsed=parse(line);
		interpreted->addLine(parsed);
	}
	return interpreted;
}