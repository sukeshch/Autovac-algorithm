#include "DirtSensorImpl.h"

DirtSensorImpl::DirtSensorImpl(std::shared_ptr<House> house,
                               std::shared_ptr<RobotState> robot)
    : house_(house), robot_(robot) {}
int DirtSensorImpl::dirtLevel() const {
  return house_->dirtLevel(robot_->getPosition());
}
