#include "../include/pid_controller.hpp"

#include <cmath>
#include <iostream>

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
