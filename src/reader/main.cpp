#include <iostream>

#include "base/construct_html.h"

int main(int argc, char *argv[])
{
	std::string toPrint=constructHtml(argv[1]);
	std::cout<<toPrint<<std::endl;
    return 0;
}