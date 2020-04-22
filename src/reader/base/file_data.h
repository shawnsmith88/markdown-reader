#pragma once

#include <vector>
#include <string>
#include <memory>

#include "parsed_line.h"

class FileData 
{
	private:
		std::vector<ParsedLine> m_lines;
		int at;
	public:
		FileData();
		void addLine(ParsedLine line);
		std::vector<std::string> getLines();
		std::vector<ParsedLine> getParsedLines();
		ParsedLine getLine();
};
