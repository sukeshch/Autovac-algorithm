#include "WallsSensorImpl.h"
WallsSensorImpl::WallsSensorImpl(const WallsSensor &w) { *this = w; }
WallsSensorImpl::WallsSensorImpl(std::shared_ptr<House> house)
    : house_(house) {}
bool WallsSensorImpl::isWall(Direction d) const { return false; }
