#include "../Common/common_types.h"
#include <algorithm>

class RobotState {
private:
  double max_battery_;
  double battery_ = 0;
  int steps_to_full_charge_;

public:
  RobotState(int max_battery_steps);
  ~RobotState();
  double maxBattery() const;
  double battery() const;
  void step();
  void charge();
};
