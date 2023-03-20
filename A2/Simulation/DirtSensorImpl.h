#pragma once

#include "../Common/DirtSensor.h"
#include "../Common/common_types.h"
#include "House.h"
#include "RobotState.h"
#include <memory>

class DirtSensorImpl : DirtSensor {
private:
  std::shared_ptr<House> house_;
  std::shared_ptr<RobotState> robot_;

public:
  DirtSensorImpl(std::shared_ptr<House> house) : house_(house) {}
  int dirtLevel() const override;
};
