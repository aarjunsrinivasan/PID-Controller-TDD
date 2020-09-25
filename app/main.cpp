/**
 * @file    main.cpp
 * @author  Arjun Srinivasan Ambalam
 * @copyright GNU Public License
 * @brief Calls the function to tune controller
 */
#include <iostream>
#include "PIDController.hpp"

int main() {
    PIDController PID(0.4, 0.3, 0.1);
    std::cout << "Kp is " << PID.getKp()<< std::endl;
    std::cout << "Ki is " << PID.getKi()<< std::endl;
    std::cout << "Kd is " << PID.getKd()<< std::endl;


    double tuned = PID.tuneController(15, 12);
    std::cout << "Controller output velocity is" << tuned << std::endl;
    return 0;
}
