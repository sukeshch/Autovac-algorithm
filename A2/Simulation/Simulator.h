//
// Created by Anshuman Funkwal on 3/13/23.
//

#pragma once

#include "../Algorithm/MyAlgorithm.h"
#include "../Common/AbstractAlgorithm.h"
#include "BatteryMeterImpl.h"
#include "DirtSensorImpl.h"
#include "WallsSensorImpl.h"
#include <iostream>

class Simulator { // : public WallsSensor, public DirtSensor, public
                  // BatteryMeter {
private:
  // cannot directly instanciate abstract algorithm, so using smart pointers
  // std::unique_ptr<MyAlgorithm> algo;
  AbstractAlgorithm *algo_t;
  std::shared_ptr<DirtSensor> dirt_sensor;
  std::shared_ptr<WallsSensorImpl> wall_sensor;
  std::shared_ptr<BatteryMeter> battery_meter;
  std::size_t max_steps_;
  std::shared_ptr<House> house_;
  // std::shared_ptr<RobotState> robot_;
  int initSensors();

public:
  Simulator();
  void readHouseFile(const std::string &house_file_path);
  void setAlgorithm(AbstractAlgorithm &algorithm);
  void run();

  // bool isWall(Direction d) const override { return false; }
  // int dirtLevel() const override { return 0; }
  // std::size_t getBatteryState() const override { return 0; }
};
