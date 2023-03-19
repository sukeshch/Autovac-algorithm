#include "Simulator.h"

Simulator::Simulator() : house_(std::make_shared<House>()) {}

void Simulator::setAlgorithm(AbstractAlgorithm &algorithm) {
  if (!wall_sensor.get() || !dirt_sensor.get() || !battery_meter.get()) {
    std::cout << "ERROR!! SETTING ALGORITHM BEFORE SENSORS INITIALIZATION"
              << std::endl;
  }
  algo_t = &algorithm;
  // algo = std::make_unique<MyAlgorithm>();
  //  algo->setMaxSteps(max_steps_);
  //   algo->setWallsSensor(*wall_sensor);
  //   algo->setDirtSensor(*dirt_sensor);
  //   algo->setBatteryMeter(*battery_meter);
}
// call init sensors only after readHouseFile?
int Simulator::initSensors() {
  // TODO: verify if shared or unique
  wall_sensor = std::make_shared<WallsSensorImpl>();
  return -1;
}

void Simulator::readHouseFile(const std::string &houseFilePath) {
  // TODO : Consider moving this function to cpp
}

void Simulator::run() {
  // TODO : Implement run() using the following function
  // algo->nextStep();
}
