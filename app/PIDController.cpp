/**
 * @file    PIDController.cpp
 * @author  Arjun Srinivasan Ambalam
 * @copyright GNU Public License
 * @brief Definition of class PIDController.
 */

#include <iostream>

#include "PIDController.hpp"

PIDController::PIDController(double p, double i, double d) {
  kp = p;
  ki = i;
  kd = d;
  current_error = 0;
  previous_error = 0;
}

double PIDController::getKp() {
  return kp;
}

double PIDController::getKi() {
  return ki;
}

double PIDController::getKd() {
  return kd;
}

double PIDController::tuneController(double desired_vel, double actual_vel) {
  current_error = desired_vel - actual_vel;

  double feedback = 0.0;

  while (current_error > error_threshold) {
    actual_vel = feedback + actual_vel;

    current_error = desired_vel - actual_vel;

    sum_error = sum_error + current_error;
    feedback = errorFeedback();
    previous_error = current_error;
  }

  return actual_vel;
}

double PIDController::errorFeedback() {
  double feedback = kp * current_error + kd * (current_error - previous_error)
      + ki * (sum_error);

  return feedback;
}
