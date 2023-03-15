cmake_minimum_required(VERSION 3.24)
project(A2)

set(CMAKE_CXX_STANDARD 17)

add_executable(A2 main.cpp Common/common_types.h Common/WallsSensor.h Common/DirtSensor.h Common/BatteryMeter.h Common/AbstractAlgorithm.h Algorithm/MyAlgorithm.cpp Algorithm/MyAlgorithm.h Simulation/Simulator.h)
