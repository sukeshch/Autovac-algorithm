#pragma once

#include "../Common/WallsSensor.h"
#include "../Common/common_types.h"
#include "House.h"

class WallsSensorImpl : WallsSensor {
private:
  std::shared_ptr<House> house_;

public:
  WallsSensorImpl(std::shared_ptr<House> house) : house_(house) {}
  bool isWall(Direction d) const override;
};
