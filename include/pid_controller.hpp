/**
 * @file pid_controller.hpp
 * @author Akashkumar Parmar (git username: akasparm), Ishan Kharat (git username: IshanMahesh)
 * @brief 
 * @version 0.1
 * @date 2023-10-08
 * 
 * @copyright Copyright (c) 2023
 * 
 */

 /**
  * @brief PIDController class
  * 
  */
class PIDController {

private:
    double kp; 
    double ki; 
    double kd; 
    double dt;

public:

    /**
     * @brief Construct a new PIDController object
     * 
     * @param kp Proportional gain
     * @param ki Integral gain
     * @param kd Derivative gain
     * @param dt Time derivative
     */
    PIDController(double kp, double ki, double kd, double dt): kp(kp), ki(ki), kd(kd), dt(dt){
    };

    /**
     * @brief Compute the new velocity error based on the target setpoint and actual velocity
     * 
     * @param setpoint The target velocity
     * @param actual_velocity The instantaneous velocity
     * @return double 
     */
    double compute(double setpoint, double actual_velocity);

};


