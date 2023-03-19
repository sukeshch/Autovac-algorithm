#pragma once
#include "../Common/common_types.h"
#include <ostream>
#include <string>
#include <vector>
class House {
private:
  std::vector<std::vector<int>> data_;
  Position dock_pos_;

public:
  House() {}
  void init(std::vector<std::vector<int>> &);
  friend std::ostream &operator<<(std::ostream &out, const House &h);
};
