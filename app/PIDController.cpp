/**
 * @file    PIDController.cpp
 * @author  Arjun Srinivasan Ambalam
 * @copyright GNU Public License
 * @brief Definition of class PIDController.
 */

#include<iostream>


#include "PIDController.hpp"

PIDController::PIDController(double p, double i, double d) {
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
             return 10;
    }
double PIDController::errorFeedback() {
        return 10;
}
