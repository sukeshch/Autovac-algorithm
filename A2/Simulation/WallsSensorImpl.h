#pragma once

#include "../Common/WallsSensor.h"
#include "../Common/common_types.h"
#include "House.h"
#include "RobotState.h"
#include "Utils.h"
#include <iostream>
#include <memory>

class WallsSensorImpl : public WallsSensor {
private:
  std::shared_ptr<House> house_;
  std::shared_ptr<RobotState> robot_;

public:
  WallsSensorImpl();
  WallsSensorImpl(std::shared_ptr<House>, std::shared_ptr<RobotState>);
  bool isWall(Direction d) const override;
};
