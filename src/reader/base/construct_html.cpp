#include "construct_html.h"

std::string constructHtml(std::string path)
{
	std::string constructed="<!DOCTYPE html>\n<html>\n\t<head>\n\t\t<title>markup</title>\n\t</head>\n\n\t<body>\n";
	std::vector<std::string> lines=parseFile(path);
	FileData fd=interpret(lines);
	constructed+=markup(fd);
	constructed+="\t</body>\n</html>";
	return constructed;
}