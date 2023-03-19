#include "Simulator.h"

Simulator::Simulator()
    : house_(std::make_shared<House>()), dirt_sensor(house_),
      walls_sensor(house_), battery_meter(house_) {}

void Simulator::setAlgorithm(AbstractAlgorithm &algorithm) {

  // if (walls_sensor || dirt_sensor || battery_meter) {
  //   std::cout << "ERROR!! SETTING ALGORITHM BEFORE SENSORS INITIALIZATION"
  //             << std::endl;
  // }
  algo = &algorithm;
  algo->setMaxSteps(max_steps_);
  DirtSensor *ds = (DirtSensor *)&dirt_sensor;
  algo->setDirtSensor(*ds);
  WallsSensor *ws = (WallsSensor *)&walls_sensor;
  algo->setWallsSensor(*ws);
  BatteryMeter *bm = (BatteryMeter *)&battery_meter;
  algo->setBatteryMeter(*bm);
}
// required?
int Simulator::initSensors() { return -1; }

int Simulator::readHouseFile(const std::string &houseFilePath) {
  // populate house_ structure here

  std::string house_name, max_steps_s, max_battery_s, num_rows_s, num_cols_s;
  std::ifstream myfile(houseFilePath);
  if (!myfile.is_open()) {
    return -1;
  }

  myfile >> house_name >> max_steps_s >> max_battery_s >> num_rows_s >>
      num_cols_s;
  if (myfile.eof()) {
    return -1;
  }
  max_steps_ = FileUtils::parseDouble(max_steps_s);
  int max_robot_battery_ = FileUtils::parseDouble(max_battery_s);
  int n_rows_ = FileUtils::parseDouble(num_rows_s);
  int n_cols_ = FileUtils::parseDouble(num_cols_s);

  std::vector<std::vector<int>> data(n_rows_, std::vector<int>(n_cols_, 0));

  int row_number = 0, col_number = 0, dock_found = 0;
  std::string line;
  myfile >> line;
  while (!myfile.eof()) {
    for (col_number = 0; col_number < line.size(); col_number++) {
      if (col_number >= n_cols_)
        break;
      if (std::isdigit(line[col_number])) {
        data[row_number][col_number] = line[col_number];
      } else if (line[col_number] == ' ') {
        data[row_number][col_number] = 0;
      } else if (line[col_number] == 'W') {
        data[row_number][col_number] = -1; // replace with LocType
      } else if (line[col_number] == 'D' && !dock_found) {
        dock_found = 1;
        data[row_number][col_number] = 100; // replace with LocType
      } else if (line[col_number] == 'D') {
        return -1;
      } else {
        return -1;
      }
    }
    myfile >> line;
    row_number++;
  }
  house_ = std::make_shared<House>(data);
  robot_ = std::make_shared<RobotState>(max_robot_battery_);
  std::cout << "House:\n";
  std::cout << *house_;
}

void Simulator::run() {
  // TODO : Implement run() using the following function
  // algo->nextStep();
}
