#include <iostream>
#include <cmath>
#include "../include/pid_controller.hpp"


int main(){

    PIDController pidcontroller(0.1, 0.01, 0.5, 0.1);

    double velocity = 20;

    // std::cout << pid.calculate(0, val);
    for (int i = 0; i < 1; i++) {
        double error = pidcontroller.compute(10, velocity);
        std::cout << "Actual Velocity: " << velocity << " Error gradient: " << error << std::endl;
        velocity += error;
    }
    return 0;

}
