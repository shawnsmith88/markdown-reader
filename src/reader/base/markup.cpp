#include "markup.h"

std::string markup(FileData* fd)
{
	std::string markedUp="";
	std::vector<ParsedLine*> lines=fd->getParsedLines();
	for(int i =0; i<lines.size();i++)
	{
		std::string line=lines.at(i)->getLine();
		std::string type=lines.at(i)->getType();
		if (type.compare("h1")==0)
		{
			markedUp+="<h1>" + line + "</h1>\n";
		}
		else if (type.compare("h2")==0)
		{
			markedUp+="<h2>" + line + "</h2>\n";
		}
		else if (type.compare("h3")==0)
		{
			markedUp+="<h3>" + line + "</h3>\n";
		}
		else if (type.compare("ul")==0)
		{
			if (i>0){
				if (lines.at(i-1)->getType().compare("ul")!=0)
				{
					markedUp+="<ul>\n";
				}
			}
			markedUp+="<li>" + line + "</li>\n";
			if (i<lines.size()-1){
				if (lines.at(i+1)->getType().compare("ul")!=0)
				{
					markedUp+="</ul>\n";
				}
			}
			else
			{
				markedUp+="</ul>\n";
			}
		}
		else
		{
			markedUp+=line + "\n";
		}
	}
	return markedUp;
	
	
}