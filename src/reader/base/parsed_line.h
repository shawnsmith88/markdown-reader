#pragma once

#include <string>

class ParsedLine
{
private:
	std::string m_line;
	std::string m_type;
public:
	ParsedLine(std::string line, std::string type)
	{
		m_line=line;
		m_type=type;
	}
	std::string getType()
	{
		return m_type;
	}
	void setType(std::string type)
	{
		m_type=type;
	}
	std::string getLine()
	{
		return m_line;
	}
	void setLine(std::string line)
	{
		m_line=line;
	}
};