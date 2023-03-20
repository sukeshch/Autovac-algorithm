#include "BatteryMeterImpl.h"

BatteryMeterImpl::BatteryMeterImpl(std::shared_ptr<RobotState> robot)
    : robot_(robot) {}
std::size_t BatteryMeterImpl::getBatteryState() const {
  return robot_->battery();
}
