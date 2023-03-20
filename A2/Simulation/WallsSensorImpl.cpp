#include "WallsSensorImpl.h"

WallsSensorImpl::WallsSensorImpl(std::shared_ptr<House> house,
                                 std::shared_ptr<RobotState> robot)
    : house_(house), robot_(robot) {}
bool WallsSensorImpl::isWall(Direction direction) const {
  return house_->isWall(robot_->getPosition().next(direction));
}
