#include "FileUtils.h"
#include "ErrorCodes.h"

using std::string;

double FileUtils::parseDouble(string input) {
  if (input.empty())
    return (size_t)FileReadError::Invalid;

  // ltrim
  input.erase(input.begin(),
              std::find_if(input.begin(), input.end(),
                           [](unsigned char ch) { return !std::isspace(ch); }));
  // rtrim
  input.erase(std::find_if(input.rbegin(), input.rend(),
                           [](unsigned char ch) { return !std::isspace(ch); })
                  .base(),
              input.end());

  try {
    return std::stod(input);
  } catch (...) {
    return (size_t)FileReadError::InvalidValue;
  }
}

size_t FileUtils::readAEqb(string input, string varname) {
  string valString = input.substr(input.find('=') + 1);

  // TODO:
  // 1. check varname FileReadError::InvalidName;
  // 2. check double  FileReadError::InvalidValue;
  // 3. other scenarios

  // handle val < 0 at caller
  return parseDouble(valString);
}
