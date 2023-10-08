class PIDController {
private:
    double kp; // Proportional gain
    double ki; // Integral gain
    double kd; // Derivative gain
    double dt; // Time derivative

public:

    // Constructor
    PIDController(double kp, double ki, double kd, double dt): kp(kp), ki(ki), kd(kd), dt(dt){
    };

    // Compute the new velocity based on the target setpoint and actual velocity
    /**
     * @brief 
     * 
     * @param setpoint 
     * @param actual_velocity 
     * @return double 
     */
    
    double compute(double setpoint, double actual_velocity);

};


