#pragma once

#include "../Common/common_types.h"

#include <string>

/**
 * All values in lines 2-5 may or may have spaces around the = sign
 * If the file is invalid you can reject it and print the reason to screen
 */
class FileUtils {
private:
  double parseDouble(std::string input);

public:
  size_t readAEqb(std::string input, std::string varname);
};
