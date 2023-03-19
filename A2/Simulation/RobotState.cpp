#include "RobotState.h"

RobotState::RobotState(int max_battery_steps)
    : max_battery_(max_battery_steps), battery_(max_battery_) {
  steps_to_full_charge_ = 20;
}

RobotState::~RobotState() {}

double RobotState::maxBattery() const { return max_battery_; }

double RobotState::battery() const { return battery_; }

void RobotState::step() {
  if (battery_)
    battery_--;
}

void RobotState::charge() {
  battery_ += max_battery_ / steps_to_full_charge_;
  battery_ = std::min(battery_, max_battery_);
}
