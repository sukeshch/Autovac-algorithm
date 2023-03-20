#pragma once

#include "../Common/BatteryMeter.h"
#include "../Common/common_types.h"
#include "House.h"
#include "RobotState.h"
#include <memory>

class BatteryMeterImpl : public BatteryMeter {
private:
  std::shared_ptr<RobotState> robot_;

public:
  BatteryMeterImpl(std::shared_ptr<RobotState> robot);
  std::size_t getBatteryState() const override;
};
