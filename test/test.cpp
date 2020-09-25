/**
 * @file    test.cpp
 * @author  Arjun Srinivasan Ambalam
 * @copyright GNU Public License
 * @brief Defines test to check methods of class PIDController.
 */
#include <gtest/gtest.h>

#include "PIDController.hpp"


/**
 *@brief Test if the gain constants are stored correctly. 
 */
TEST(test1, checkgainvalues) {
    PIDController PID(0.2, 0.1, 0.2);
    ASSERT_FLOAT_EQ(PID.getKp(), 0.2);
    ASSERT_FLOAT_EQ(PID.getKi(), 0.1);
    ASSERT_FLOAT_EQ(PID.getKd(), 0.2);
}

/**
 *@brief Test if the newVelocity after PID converges to the setpoint within
  given threshold limit. 
 */
TEST(test2, checkconvergance) {
    PIDController PID(0.5, 0.3, 0.2);
    double error = PID.tuneController(15, 10);
    EXPECT_NEAR(error, 15, 0.1);
}
