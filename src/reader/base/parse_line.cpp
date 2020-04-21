#include "parse_line.h"
#include <iostream>

ParsedLine* parse(std::string line)
{
	std::string type="";
	if (line.at(0)=='#')
	{
		if (line.at(1)==' ')
		{
			type="h1";
			line=line.substr(2,line.length());
		
		}
		if (line.at(1)=='#')
		{
			if (line.at(2)==' ')
			{
				type="h2";
				line=line.substr(3,line.length());
			}
			if (line.at(2)=='#')
			{
				if (line.at(3)==' ')
				{
					type="h3";
					line=line.substr(4,line.length());
				}
			}
		}
	}
	if (line.at(0)=='-' || line.at(0)=='*')
	{
		type="ul";
		line=line.substr(1,line.length());
	}
	if ( std::isdigit( line.at(0) ) && line.at(1)=='.' )
	{
		type="ol";
		line=line.substr(2,line.length());
	}
	if (line.at(0)=='>')
	{
		type="blockquote";
		line=line.substr(1,line.length());
	}
	line=inlineMarkup(line);
	ParsedLine* parsed=new ParsedLine(line,type);
	return parsed;
}