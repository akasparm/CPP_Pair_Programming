/**
 * @file main.cpp
 * @author Akashkumar Parmar (git username: akasparm), Ishan Kharat (git
 * username: IshanMahesh)
 * @brief
 * @version 0.1
 * @date 2023-10-08
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <cmath>
#include <iostream>

#include "../include/pid_controller.hpp"

/**
 * @brief A method to calculate the new velocity given the set point and actual
 * velocity.
 *
 * @return int
 */
int main() {
  PIDController pidcontroller(0.1, 0.01, 0.5, 0.1, 0.0);

  double velocity = 20;

  for (int i = 0; i < 100; i++) {
    double error = pidcontroller.compute(10, velocity);
    std::cout << "Actual Velocity: " << velocity << " Error gradient: " << error
              << std::endl;
    velocity += error;
  }
  return 0;
}
