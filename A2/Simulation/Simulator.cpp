#include "Simulator.h"

Simulator::Simulator() {}

void Simulator::setAlgorithm(AbstractAlgorithm &algorithm) {
  if (!wall || !dirt || !battery) {
    std::cout << "ERROR!! SETTING ALGORITHM BEFORE SENSORS INITIALIZATION"
              << std::endl;
  }
  algo = &algorithm;
  algo->setMaxSteps(max_steps_);
  algo->setWallsSensor(*wall);
  algo->setDirtSensor(*dirt);
  algo->setBatteryMeter(*battery);
}

int Simulator::initSensors() { return -1; }

void Simulator::readHouseFile(const std::string &houseFilePath) {
  // TODO : Consider moving this function to cpp
  if (initSensors() == -1) {
    std::cout << "ERROR INITIALIZING SENSORS" << std::endl;
  }
}

void Simulator::run() {
  // TODO : Implement run() using the following function
  algo->nextStep();
}
