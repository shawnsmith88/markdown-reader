#include "file_data.h"

#include <iostream>

FileData::FileData()
{
	at=0;
}

void FileData::addLine(ParsedLine line)
{
	m_lines.push_back(line);
}

ParsedLine FileData::getLine()
{
	return m_lines.at(at);
}
std::vector<std::string> FileData::getLines()
{
	std::vector<std::string> lines;
	for(int i = 0; i<m_lines.size(); i++)
	{
		lines.push_back(m_lines.at(i).getLine());
	}
	return lines;
}
std::vector<ParsedLine> FileData::getParsedLines()
{
	return m_lines;
}

