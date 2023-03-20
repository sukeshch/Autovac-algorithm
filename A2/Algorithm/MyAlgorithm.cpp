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
  return Step::Finish;
}
