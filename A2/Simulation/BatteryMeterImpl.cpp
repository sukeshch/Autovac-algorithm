#include "BatteryMeterImpl.h"

std::size_t BatteryMeterImpl::getBatteryState() const {
  return robot_->battery();
}
