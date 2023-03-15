#include <iostream>
#include "Simulation/Simulator.h"
#include "Algorithm/MyAlgorithm.h"

// getting command line arguments for the house file
int main(int argc, char** argv) {

    Simulator sim;
    //TODO: Handle empty command line args etc.
    sim.readHouseFile(argv[1]);
    MyAlgorithm algo;
    sim.setAlgorithm(algo);
    sim.run();
}
