/**
 * @file pid_controller.cpp
 * @author Surya Chappidi (git username: SuryaVC), Vinay Krishna Bukka (git
 * username: Vinay06vinay)
 * @brief Implementation of the PID controller class
 * @version 0.1
 * @date 2023-10-10
 *
 * @copyright Copyright (c) 2023
 *
 */

#include "../include/pid_controller.hpp"

#include <cmath>
#include <iostream>

/**
 * @brief Calculate output based on the PID algorithm.
 *
 * This method calculates the new velocity based on the actual velocity and target velocity
 * using the PID control algorithm.
 * @param setpoint The target velocity
 * @param actual_velocity The instantaneous velocity
 * @return double - The control output that should be applied to the system
 */
double PIDController::compute(double setpoint, double actual_velocity) {

  // calculating the error
  double error = setpoint - actual_velocity;

  // calculating the derivative error
  double derivative_error = (error - previous_error)/dt;

  // calculating the integral error
  double integral_error = error * dt;

  // calculating the total output 
  double output = kp * error + kd * derivative_error + ki * integral_error;

  previous_error = error;

  return output;
}
