#include "House.h"

void House::init(std::vector<std::vector<int>> &data, Position &dock_pos) {
  data_ = data;
  dock_pos_ = dock_pos;
}
