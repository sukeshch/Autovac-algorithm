#pragma once

#include "../Common/DirtSensor.h"
#include "../Common/common_types.h"
#include "House.h"

class DirtSensorImpl : DirtSensor {
private:
  std::shared_ptr<House> house_;

public:
  DirtSensorImpl(std::shared_ptr<House> house) : house_(house) {}
  int dirtLevel() const override;
};
