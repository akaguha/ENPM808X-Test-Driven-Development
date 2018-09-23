/**
 * Copyright 2018 Rohitkrishna Nambiar
 *
 * @file    PidController.hpp
 * @author  Rohitkrishna Nambiar (rohit517)
 * @date    9/22/2018
 * @version 1.0
 *
 * @brief   PidController class.
 *
 * @section DESCRIPTION
 *
 * This class cpp file implements the methods for PID Controller.
 */

#include <iostream>
#include "PidController.hpp"

/**
 * @brief Constructs the PidController object with default values
 */
PidController::PidController() {
}

/**
 * @brief Constructs the PidController object with user defined values
 */
PidController::PidController(double userKp, double userKi, double userKd) {
}

/**
 * @brief Computes the velocity based on target and actual velocity
 */
double PidController::computeVelocity(double targetSetpoint,
                                      double actualVelocity) {
  return 0.0;
}

/**
 * @brief Destroys the PidController object
 */
PidController::~PidController() {
}
