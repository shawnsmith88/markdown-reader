#pragma once

#include <vector>
#include <string>

#include "parse_file.h"
#include "file_data.h"
#include "parse_line.h"


FileData* interpret(std::vector<std::string> input);