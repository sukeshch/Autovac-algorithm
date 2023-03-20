#pragma once

#include "../Common/common_types.h"

#include <string>

/**
 * All values in lines 2-5 may or may have spaces around the = sign
 * If the file is invalid you can reject it and print the reason to screen
 */
class Utils {
public:
  static double parseDouble(std::string input);
  size_t readAEqb(std::string input, std::string varname);
};
struct Position {
  int r, c;
  Position next(const Direction &d) {
    switch (d) {
    case Direction::North:
      return {r - 1, c};
    case Direction::South:
      return {r + 1, c};
    case Direction::West:
      return {r, c - 1};
    case Direction::East:
      return {r, c + 1};
    default:
      return {r, c};
    }
  }
};

Direction reverse(const Direction &d);
