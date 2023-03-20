#include "WallsSensorImpl.h"
WallsSensorImpl::WallsSensorImpl(std::shared_ptr<House> house)
    : house_(house) {}
bool WallsSensorImpl::isWall(Direction direction) const {
  std::cout << "Current Robot Pos:" << robot_->getPosition().next(direction);
  return false;
  // return house_->isWall(robot_->getPosition().next(direction));
}
