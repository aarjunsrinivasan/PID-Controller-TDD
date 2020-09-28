/**
 * @file    main.cpp
 * @author  Arjun Srinivasan Ambalam
 * @copyright GNU Public License
 * @brief Calls the function to tune controller
 */
#include <iostream>
#include "PIDController.hpp"

int main() {
    // std::



    PIDController PID(0.4, 0.3, 0.1);
    std::cout << "Kp is " << PID.getKp()<< std::endl;
    std::cout << "Ki is " << PID.getKi()<< std::endl;
    std::cout << "Kd is " << PID.getKd()<< std::endl;
    double set_point = 15.0;
    double actual_value = 12.0;

    std::cout << "Desired velocity is" << set_point << std::endl;
    std::cout << "Present velocity is" << actual_value << std::endl;

    double tuned = PID.tuneController(set_point, actual_value);
    std::cout << "Controller output velocity is" << tuned << std::endl;
    return 0;
}
