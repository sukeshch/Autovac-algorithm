//
// Created by Anshuman Funkwal on 3/13/23.
//

#include "MyAlgorithm.h"

MyAlgorithm::MyAlgorithm() {}

MyAlgorithm::MyAlgorithm(AbstractAlgorithm &algorithm) { *this = algorithm; }
void MyAlgorithm::setMaxSteps(std::size_t maxSteps) {
  this->maxSteps = maxSteps;
}
void MyAlgorithm::setWallsSensor(const WallsSensor &walls_sensor) {
  walls_sensor_ = &walls_sensor;
}
void MyAlgorithm::setDirtSensor(const DirtSensor &dirt_sensor) {
  dirt_sensor_ = &dirt_sensor;
}
void MyAlgorithm::setBatteryMeter(const BatteryMeter &battery_meter) {
  battery_meter_ = &battery_meter;
}

Step MyAlgorithm::nextStep() {
  /* TODO : Add your logic */
  std::cout << "Debug:";
  if (walls_sensor_)
    std::cout << 1 << std::endl;
  else
    std::cout << 0 << std::endl;
  // causes seg fault if below statement run TODO: fix this
  // std::cout << walls_sensor_->isWall(Direction::East) << std::endl;

  return Step::Finish;
}
