#include "DirtSensorImpl.h"

int DirtSensorImpl::dirtLevel() const {
  return house_->dirtLevel(robot_->getPosition());
}
