//
// Created by Anshuman Funkwal on 3/13/23.
//

#pragma once

#include "../Common/AbstractAlgorithm.h"

class Simulator { // : public WallsSensor, public DirtSensor, public
                  // BatteryMeter {
private:
  AbstractAlgorithm *algo = nullptr;
  DirtSensor *dirt = nullptr;
  // std::shared_ptr<DirtSensor> dirt_sensor;
  WallsSensor *wall = nullptr;
  BatteryMeter *battery = nullptr;
  std::size_t max_steps_;
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
