#pragma once

#include "../Common/WallsSensor.h"
#include "../Common/common_types.h"
#include "House.h"
#include <memory>

class WallsSensorImpl : WallsSensor {
private:
  std::shared_ptr<House> house_;

public:
  WallsSensorImpl();
  WallsSensorImpl(const WallsSensor &);
  WallsSensorImpl(std::shared_ptr<House>);
  bool isWall(Direction d) const override;
};
