#include <gtest/gtest.h>
#include "pid_controller.hpp"

TEST(pid_controller_test_1, Implement_the_code_and_pass_the_test1) {
    
    PIDController PIDController(0.5, 0.1, 0, 0.5);
    double output = PIDController.compute(10, 18);

    ASSERT_NE(output,0.0);
}

TEST(pid_controller_test_2, Implement_the_code_and_pass_the_test2) {
    
    PIDController PIDController(0.1, 0.01, 0.5, 0.1);
    double output = PIDController.compute(0, 20);
    ASSERT_NEAR(output, -102.02, 1e-4);
}
