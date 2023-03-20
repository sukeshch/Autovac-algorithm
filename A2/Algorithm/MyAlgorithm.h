//
// Created by Anshuman Funkwal on 3/13/23.
//

#pragma once

#include "../Common/AbstractAlgorithm.h"
#include "../Simulation/DirtSensorImpl.h"
#include <iostream>
#include <memory>
class MyAlgorithm : public AbstractAlgorithm {
  std::size_t maxSteps;
  const WallsSensor *walls_sensor_ = nullptr;

  // std::shared_ptr<DirtSensorImpl> ds_;
  const DirtSensor *dirt_sensor_ = nullptr;
  const BatteryMeter *battery_meter_ = nullptr;

public:
  MyAlgorithm();
  MyAlgorithm(AbstractAlgorithm &algorithm);

  void setMaxSteps(std::size_t maxSteps) override;
  void setWallsSensor(const WallsSensor &walls_sensor) override;
  void setDirtSensor(const DirtSensor &dirt_sensor) override;
  void setBatteryMeter(const BatteryMeter &battery_meter) override;
  // TODO : Complete in cpp file
  Step nextStep() override;
};
