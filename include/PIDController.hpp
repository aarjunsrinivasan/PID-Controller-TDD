/**
 * @file    PIDController.hpp
 * @author  Arjun Srinivasan Ambalam
 * @copyright GNU Public License
 * @brief Declaration of class PIDController.
 */
#ifndef INCLUDE_PIDCONTROLLER_HPP_
#define INCLUDE_PIDCONTROLLER_HPP_

#include<iostream>

/**
 * @brief Class PIDController
 * The following class PIDController aids in calculation of the newVelocity
 * using desired Velocity and current velocity. It implements functions to tune 
 * controller and get the error response
*/

class PIDController {
 private:
        double kp;  /*!< Proportional coefficient*/
        double ki;  /*!< Integral coefficient*/
        double kd;  /*!< Derivative coefficient*/
        double current_error;/*!< keep track of current error*/
        double previous_error;/*!< keep track of previous error*/
        double sum_error = 0;/*!< keep track of cumulative error*/
        double error_threshold = 0.1;  /*!< can be varied for accuracy*/
        double dt = 1;/*!< step time interval*/

 public:
PIDController(double p, double i, double d);
/**
 * @brief function getProportional
 * @return kProportional of type double
 * The following function getProportional return the value of proportional
 * gain.
 */
double getKp();

/** 
 * @brief function getIntegral
 * @return kIntegral of type double
 * The following function getIntegral return the value of Integral
 * gain.
 */
double getKi();

/**
 * @brief function getDerivative
 * @return kDerivative of type double
 * The following function getDerivative return the value of derivative
 * gain.
 */
double getKd();
/**
 * @brief function tuneController
 * @return newVelocity of type double
 * The following function makes the actual velocity to match desired from error feedback
 */
double tuneController(double desired_vel, double actual_vel);
/**
 * @brief function gets the Error Feedback 
 * @return errorFeedback of type double
 * The following function returns the feedback error after applying gains for the step time interval
 */
double errorFeedback();



~PIDController() {}
};
#endif  // INCLUDE_PIDCONTROLLER_HPP_




