//
// Created by Anshuman Funkwal on 3/13/23.
//

#pragma once

#include "../Common/AbstractAlgorithm.h"

class MyAlgorithm : public AbstractAlgorithm {
  std::size_t maxSteps;
  const WallsSensor *walls_sensor_ = nullptr;
  const DirtSensor *dirt_sensor_ = nullptr;
  const BatteryMeter *battery_meter_ = nullptr;

public:
  void setMaxSteps(std::size_t maxSteps) override { this->maxSteps = maxSteps; }
  void setWallsSensor(const WallsSensor &walls_sensor) override {
    walls_sensor_ = &walls_sensor; // make_unique<>()
  }
  void setDirtSensor(const DirtSensor &dirt_sensor) override {
    dirt_sensor_ = &dirt_sensor;
  }
  void setBatteryMeter(const BatteryMeter &battery_meter) override {
    battery_meter_ = &battery_meter;
  }
  // TODO : Complete in cpp file
  Step nextStep() override;
};
