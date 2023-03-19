#pragma once

#include "../Common/BatteryMeter.h"
#include "../Common/common_types.h"
#include "House.h"
#include <memory>

class BatteryMeterImpl : BatteryMeter {
private:
  // std::shared_ptr<RobotState> robot_;
  std::shared_ptr<House> house_;

public:
  // BatteryMeterImpl(std::shared_ptr<RobotState> robot) : robot_(robot) {}
  BatteryMeterImpl(std::shared_ptr<House> house) : house_(house) {}

  std::size_t getBatteryState() const override;
};
